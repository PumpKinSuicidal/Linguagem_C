int somaArray(int n[], int qtd){    
    int rs = 0;
    int ps;
    for(ps = 0; ps < qtd ; ps++){
        // += Somar um valor com o proprio valor
        rs += n[ps];
    }
    return rs;
}

int mediaArray(int n[], int qtd){    
    int rs = 0;
    int ps;
    for(ps = 0; ps < qtd ; ps++){
        rs += n[ps];
        rs = rs / qtd;
    }
    return rs;
}

int maiorValor(int n[], int qtd){
    int m,i;
            for(i = 1; i < qtd; i++) {
            if(n[i] > m){
            m = n[i];
        }
    }
    return m;
}