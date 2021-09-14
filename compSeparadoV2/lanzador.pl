#!/usr/bin/perl

#Fichero para la ejecución

$path = "/Users/miguelsalazar/Documents/Arquitectura/Tareas/compSeparado/compSeparadoV2";

@ejecutables = ("principal");

@vectorSize = ("100", "200", "400", "600", "800");

$repeticiones = 30;

foreach $exe (@ejecutables){
    foreach $vez (@vectorSize){
        $file = "$path/"."$exe"."-size"."$vez"."-core";

        #print "$file \n"; #este es el nombre del archivo

        for ($i=0; $i< $repeticiones; $i++){
            system("$path/$exe $vez >> $file");
            #print "$path/$exe $vez \n";
        }
    }
}
