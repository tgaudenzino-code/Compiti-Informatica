cmake_minimum_required(VERSION 3.20)
project(Compiti_Informatica)

set(CMAKE_CXX_STANDARD 17)

# Cerca tutti i file .cpp nella cartella C++ e sottocartelle
file(GLOB_RECURSE SOURCES "C++/*.cpp")

foreach(source_file ${SOURCES})
    # Prende il nome del file senza estensione (es: "Es Pag 117")
    get_filename_component(raw_name ${source_file} NAME_WE)

    # PULIZIA: Sostituisce spazi, virgole e punti con underscore
    string(REGEX REPLACE "[ ,.]" "_" clean_name ${raw_name})

    # Crea l'eseguibile usando il nome pulito (es: "Es_Pag_117")
    add_executable(${clean_name} ${source_file})
endforeach()
