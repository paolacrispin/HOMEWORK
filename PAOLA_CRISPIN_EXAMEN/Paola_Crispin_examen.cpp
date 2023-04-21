# include <iostream>
# include <string>
using namespace std;
int main () { 
char fa, sa, tr;//fa=first answer; sa=Second answer; tercera respuesta
cout<< "----------AYUDA A CHIKI A LLEGAR A CASA----------"<<endl;
cout<<"El humano de Chiki se fue de viaje y dejo a cargo de su prima a su querida mascota Chiki. Una noche, dejaron abierta la puerta principal de la casa donde se estaba quedando, dando como resultado que Chiki salga corriendo en busca de su humano "<<endl;
cout<< "Despues de haber vagado por calles desconocidas por varias horas, Chiki estaba hambriento y muy cansado"<<endl;
cout<< "Ayuda a Chiki a decidir cual sera su proximo destino"<<endl;
cout<< "Elije entre las tres opciones"<<endl;
do {
cout<< "A = Dirigirse al centro comercial que esta a un par de cuadras"<<endl;
cout<< "B = Quedarse descansando en la acera"<<endl;
cout<< "C = Dirigirse al parque que esta doblando la esquina"<<endl;
cin>>fa;
if (fa=='A'){
	cout<<"Cuando Chiki iba llegando al centro comercial se encontro con la novia de su humano!!!"<<endl;
	cout<<"Gracias por ayudar a Chiki a llegar a casa"<<endl;
	cout<< "----------FIN DE LA AVENTURA----------"<<endl;
	break;
}
else if (fa=='B'){
	cout<<"Recuerda que es muy peligroso dejar a una mascota en medio de la acera ya que alguien lo podria pisar :( "<<endl;
	cout<<"Mientras Chiki estaba durmiendo, la perrera se lo llevo."<<endl;
	cout<<"Lamentablemente no hay chance de que Chiki vuelva a ver a su humano dentro de mucho tiempo"<<endl;
	cout<< "----------FIN DE LA AVENTURA----------"<<endl;
	break;
}
else if (fa=='C'){
	cout<<"Cuando Chiki por fin habia llegado al parque se encontro con un pandilla de gatos. Entre ellos visualizo a Misha, la gata perdida de la novia de su humano"<<endl;	
	cout<<"Chiki le dijo a Misha que su humana la habia estado buscando por meses y que ahora que el esta perdido podrian encontrar a sus humanos juntos"<<endl;
	cout<<"Sin embargo Misha se encontraba entre la espada y la pared ya que recientemente se habia unido a la pandilla y no queria dejarlos, pero a la vez tenia muchas ganas de reunirse de nuevo con su humana"<<endl;
	cout<<"Ayuda a Misha a tomar una decision"<<endl;
	cout<< "Elije entre las dos opciones"<<endl;
	do {
	cout<< "A = Acompañar a Chiki en esta gran aventura "<<endl;
	cout<< "B = Quedarse en la pandilla y ofrecer a Chiki que se una"<<endl;
	cin>>sa;
	if (sa=='A'){
	cout<<"Ahora era Misha y Chiki en busca de sus humanos :)"<<endl;
	cout<<"Como ambos estaban muy hambrientos, deciden que Chiki haga ojo de perrito mojado a las personas para que les den algo de comer "<<endl;
	cout<<"Cuando terminan de comer, a los lejos ven un anuncio con la cara de Chiki. Eso solo significaba que su humano lo estaba buscando!!!"<<endl;
	cout<<"Ayuda a Misha y Chiki a decidir que hacer con ese anuncio"<<endl;
	cout<< "Elije entre las dos opciones"<<endl;
	do {
	cout<< "A = Ladrar y maullar hasta que alguien se acerque a ver que esta pasando y asi puedan ver el anuncio y llamar a su humano "<<endl;
	cout<< "B = Misha se trepe al arbol donde esta el anuncio y capture la hoja para asi poder entregarsela a alguna persona"<<endl;
	cin>>tr;
	if (tr=='A'){
		cout<<"Una amiga de sus humanos encuentra el anuncio y lleva a Misha y a Chiki a casa de la humana de Misha para que los cuide mientras que el humano de Chiki de viaje "<<endl;
		cout<< "----------FIN DE LA AVENTURA----------"<<endl;
	break;
	}
	else if(tr=='B'){
		cout<<"Mientras que Misha esta trepando Chiki escucha unos pasos acercandose"<<endl;
		for(int i=0; i<=5;++i){
			cout<<i<<endl;
		}
		cout<<"LA PERRERA!!!"<<endl;
		cout <<"Lamentablemente son atrapados y ya no hay chance de que vuelva a encontrar a sus humanos"<<endl;
		cout<< "----------FIN DE LA AVENTURA----------"<<endl;
	break;
	}
	else {
	cout<<"----ERROR----"<<endl;
	cout<<"Ingrese una de las dos opciones por favor"<<endl;
	}
	}while(tr!='A'|| tr!='B');
	break;
}
	else if(sa=='B'){
	cout<< "Sorpresivamente Chiki acepto quedarse en la pandilla ya que, al estar muy cansado y hambriento, no pensaba con claridad las cosaS"<<endl;
	cout<< "----------FIN DE LA AVENTURA----------"<<endl;
	break;
	}
	else {
	cout<<"----ERROR----"<<endl;
	cout<<"Ingrese una de las dos opciones por favor"<<endl;
	}
	}while(sa!='A'|| sa!='B');
	break;
}
else {
		cout<<"----ERROR----"<<endl;
		cout<<"Ingrese una de las tres opciones por favor"<<endl;
}
}while(fa!='A'|| fa!='B'|| fa!='C');
return 0;
}


