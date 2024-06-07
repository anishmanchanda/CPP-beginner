int fact(int n){
        int product=1;
        for(int i=n;i>=1;i--){
            product *= i;
        }
        return product;
    }