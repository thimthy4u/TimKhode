void ascii(){
  int i,j,k;
  for(i = 0 ; i <= 5 ; ++i){
    for(j = 5 ; j >= i ; --j){
      cout << " ";
    }
    for( k = j ; k >= 0 ; --k){
      cout << " *";
    }
    cout << "\n";
  }

}
