int main() {
    float horas_trabajadas, precio_por_hora, salario_semanal;

   
    std::cout << "Ingrese las horas trabajadas esta semana: ";
    std::cin >> horas_trabajadas;

    std::cout << "Ingrese el precio por hora: ";
    std::cin >> precio_por_hora;

    
    if (horas_trabajadas <= HORAS_NORMALES) {
        salario_semanal = horas_trabajadas * precio_por_hora;
    } else if (horas_trabajadas > HORAS_NORMALES && horas_trabajadas <= 50) {
        salario_semanal = (HORAS_NORMALES * precio_por_hora) + 
                          ((horas_trabajadas - HORAS_NORMALES) * precio_por_hora * PRECIO_HORA_EXTRA_NORMAL);
    } else {
        salario_semanal = (HORAS_NORMALES * precio_por_hora) + 
                          (10 * precio_por_hora * PRECIO_HORA_EXTRA_NORMAL) +
                          ((horas_trabajadas - 50) * precio_por_hora * PRECIO_HORA_EXTRA_DOBLE);
    }

    std::cout << "El salario semanal es: " << salario_semanal << std::endl;

    return 0;
}
