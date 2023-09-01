
# libft_42

Libft projesinde bizden libc kütüphanesinde halihazırda yazılı olan belli başlı fonksiyonları yazmamız istenmektedir. Ayrıca libc'den bağımsız olarak, ilerleyen projelerde işimize yarayacak fonksiyonlar yazmamız gerekmektedir.

Aşağıda bütün fonksiyonlar tek tek açıklanmıştır ve örnek mainleri yazılmıştır. Ayrıca temel makefile ve header dosyası açıklanmıştır.

### ft_isalpha

Bu fonksiyonda argüman olarak bir karakter alırız ve basit bir kontrol ile gelen karakterin bir harf olup olmadığını kontrol ederiz. Karakter bir harf ise geriye (1) döndürür. Eğer bir harf değil ise geriye (0) döndürür.

```c
int main(void)
{
    int a;
    int b;

    a = ft_isalpha('c'); //a 1 değerini alır.
    b = ft_isalpha(3); //b 0 değerini alır.
}
```


### ft_isdigit

Bu fonksiyonda argüman olarak bir karakter alırız ve basit bir kontrol ile gelen karakterin bir rakam olup olmadığını kontrol ederiz. Karakter bir rakam ise geriye (1) döndürür. Eğer bir rakam değil ise geriye (0) döndürür.


```c
int main(void)
{
    int a;
    int b;
    int c;
    int d;

    a = ft_isdigit('3'); //a 1 değerini alır.
    b = ft_idigit(3); //b 0 değerini alır.
    c = ft_isdigit('a') //c 0 değerini alır.
    d = ft_isdigit(50) // d 1 değerini alır.
}
```

### ft_isalnum

