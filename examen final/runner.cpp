#include "runner.h"

// variable global en donde debe guardarse los datos pasados
// Esto para el calculo correcto de los siguientes pasos, distancias, calorias, etc
vector<package> storage_data = {};

// TODO: Implente esta funcion.
// Verifique que la data en el paquete sea valida
bool check_correct_data(package data) {
    if(data.steps > 0 && data.seconds > 0){ 
    return true;
    }
    else{
    return false;
    } 
}

// TODO: Implemente esta funcion.
// Verifique que el tiempo obtenido sea correcto.
bool check_correct_time(long seconds) {
    if (storage_data.empty()){
        return true;
    }
    else{
        package anterior=storage_data.back();
        return seconds>anterior.seconds; //compara que los segundos entrantes sean mayores del package anterior
    }  
}

// TODO: Implemente esta funcion
// Devuelve la suma total de los pasos dados durante el dia
int get_step_day(int steps) {
    if (storage_data.size()==1){ 
        return steps;
    }
    else{
      int get_total_steps=0;
        for (const package &sum_steps : storage_data){
        get_total_steps+=sum_steps.steps;
        }
        return get_total_steps;
    }
}

// TODO: Implemente esta funcion
// Devuelve la distancia recorrida segun los pasos dados durante el dia
double get_distance(int steps) {
  return ((steps*STEP_M)/1000);
}

// TODO: Implemente esta funcion
// Devuelve las calorias quemadas segun la distancia recurrida
double get_calories_burned(double dist, times current_time) {
  return (K_1*WEIGHT+(((dist/current_time.hour)*(dist/current_time.hour))/HEIGHT)*K_2*WEIGHT)*current_time.min;
}

times get_time_hms(long seconds){
  times conversion;
  conversion.hour=seconds/3600;
  conversion.min=seconds/60;
  conversion.sec=seconds;
  return conversion;
}
// TODO: Implemente esta funcion
string format_time(long seconds, times result){
string show_time= aumenta_0(result.hour)+":"+aumenta_0(result.min)+":"+aumenta_0(result.sec);
return show_time;
}

times get_format_time(long seconds){
times result;
result.hour=seconds/3600;
result.min= (seconds%3600)/60;
result.sec=(seconds%3600)%60; 
return result;
}

string aumenta_0(int time) {
  if (time < 10) {
    return "0" + to_string(time);
  }
  else{
  return to_string(time);
  }
}

string get_achievement(double dist) {
  if (dist<2){
    return "Está bien tomarse el día de descanso. No siempre se puede ganar.";
  }
  else if (dist >=2 && dist < 3.9){
    return "Menos que el resultado deseado, ¡pero intenta alcanzarlo mañana!";
  }
  else if (dist >=3.9 && dist < 6.5){
    return "¡Nada mal! Hoy ha sido un día productivo.";
  }
  else {
  return"¡Gran entrenamiento! Objetivo cumplido." ;
  }
}

void show_message(string time, int total_steps, double dist, double calories, string achievement) {
    cout << "Tiempo: " << time <<"."<< endl;
    cout << "Pasos dados hoy: " << total_steps <<"."<< endl;
    cout << "La distancia fue " << dist << " km."<< endl;
    cout << "Has quemado " << calories << " cal." << endl;
    cout << achievement << endl;
}
// TODO: Implemente la funcion madre
// Esta funcion debe llamar a las otras para realizar lo indicado en el pdf
vector<package> accept_package(package data) {
    if (check_correct_data(data)!=true){
      return storage_data;
    }

    if(check_correct_time(data.seconds)!=true){
      return storage_data;
        }
      
    storage_data.push_back(data);

    times result = get_format_time(data.seconds);
    string time= format_time(data.seconds, result);
    int total_steps = get_step_day(data.steps);
    double dist = get_distance(total_steps);
    times current_time =get_time_hms(data.seconds);
    double calories = get_calories_burned(dist, current_time);
    string achievement = get_achievement(dist);
    show_message(time, total_steps, dist, calories, achievement);
  return storage_data;
}