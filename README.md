<h2>Algorithms</h2>
<p>&nbsp&nbsp&nbsp&nbsp&nbspAlgoritma, istenen çıktıyı elde etmek için belirli bir sırada gerçekleştirilecek bir dizi talimatı adım adım tanımlayan bir prosedürdür. Algoritmalar genellikle altta yatan dillerden bağımsız olarak oluşturulur, yani birden fazla programlama dilinde bir algoritma uygulanabilir.</p>
<h3>Searcing Algorithms</h3>
<ul>
    <li>
        <b>Linear Search</b> - Doğrusal arama çok basit bir arama algoritmasıdır. Tüm öğeler üzerinde birer birer sıralı bir arama yapılır. Her değer kontrol edilir ve eğer bir eşleşme bulunursa o zaman o değerin bulunduğu index geri döndürülür, aksi takdirde üzerinde arama yapılan veri dizisinin sonuna kadar arama devam eder. Sıralı ve sıralı olmayan veri dizisi üzerinde olmak üzere 2 farklı şekilde oluşturulabilir:
        <ul>
            &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/linear_search.gif" alt="Linear Search"/>
            <li>
                <b>For Unordered List</b> : Sıralı olmayan veri dizisinde arama, aranan eleman bulunmadığı takdirde veri setinin sonuna kadar devam eder.
            </li>
            <li>
                <b>For Ordered List</b> : Sıralı veri dizisinde ise aranan eleman dizideki her elemanla kıyaslanırken eğer kıyaslandığı elemandan küçük(veri dizisi küçükten büyüğe doğru sıralanmış ise) olduğu bir durum olursa, dizi sıralı olduğu için aranan elemanın ilgili index'ten sonra bulunabilme ihtimali olmayacağı için arama otomatik olarak sonlandırılır. Böylece zaman açısından daha verimli bir sonuç elde edilir.<br><br>
            </li>
        </ul>
    </li>
    <li>
        <b>Jump Search</b> - Atlamalı arama doğrusal aramaya göre daha hızlı, ikili aramaya göre daha yavaş kalan ve sıralı veri setleri üzerinde çalışan bir arama algoritmasıdır. Temel fikir, sabit adımlarla ileriye atlayarak, dizinin tüm elemanlarını aramak yerine bazı elemanları atlayarak doğrusal aramaya göre daha az elemanı kontrol etmektir.<br>
        &nbsp&nbsp&nbsp&nbsp&nbsp<b>&nbsp &#x27A5;&nbspStep Size:&nbsp</b>Jump search yaparken aradığımız değerin en kötü ihtimalle dizinin sonlarında olduğunu düşünelim. Bu durumda en kötü ihtimalle dizinin n elemanlı ise ve atlama adım büyüklüğümüz <b>m</b> ise <b>(n / m)</b> kadar atlama yapmış oluruz. <b>(n / m)</b> atlama yaptıktan sonra da aradığımız değerin bu son adımımızın içinde olduğunu ve bu adımın içindeki son eleman olduğunu düşünürsek <b>(m - 1)</b> eleman daha kontrol etmiş oluruz. Yani en kötü durumda toplam karşılaştırma sayısı:<br>
        <b><code>(n / m) + (m - 1)</code></b><br>
        olacaktır. Algoritmanın performansı ve hızı açısından bu eşitliğin minimum değer üretmesini isteriz. Bu yüzden bu ifadenin üretebileceği minimum değeri bulmak için(yerel minimum noktası arıyoruz) denklemin <b>m</b> değerine göre türevini alıp sıfıra eşitleriz:<br>
        <b><code>n / -m<sup>2</sup> + 1 = 0</code></b><br>
        ifadesini elde etmiş olduk. Bu ifadeyi de çözümleyecek olursak:
        <b><code>n = m<sup>2</sup></code></b><br>
        <b><code>m = √n</code></b><br>
        Böylece atlamalı aramada tercih edilecek en iyi atlama adımı uzunluğunu dizinin boyunun karekökü olarak bulmuş olduk. Örneğin aşağıdaki dizi içerisinde 5 değerini atlamalı arama ile bulmaya çalışalım:<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/jump-search-1.jpg" alt="Jump Search"/><br><br>
        Öncelikle step size yani atlama adımı uzunluğumuzu bulalım. Dizi 9 elemanlı olduğu için:<br>
        <b><code>step_size = √9 = 3</code></b><br>
        olarak bulunmuş olur. Daha sonra ilk elemandan itibaren 3 adım atlayarak bulunduğumuz değeri aradığımız değer ile karşılaştırırız. İlk atlamadaki 4 değeri ile 5 değeri eşleşmediği ve 4 değeri 5 değerinden küçük olduğu için bir adım daha atlarız. İkinci atlamamızda bulunduğumuz indisin 7 olan değeri aradığımız 5 değerinden büyük olduğu için artık ileriye doğru atlama yapmayız ve bu değerimizi bir önceki adımımızda durduğumuz indis ile şu an durduğumuz indis arasında doğrusal arama yaparak ararız. Böylece aradığımız 5 değerini dizinin 4 numaralı indisinde bulmuş oluruz.<br><br>
    </li>
    <li>
        <b>Binary Search</b> - İkili arama böl ve yönet prensibi ile çalışan hızlı bir arama algoritmasıdır. Bu algoritma sıralı veri setleri üzerinde düzgün olarak çalışır. İkili arama, aranan değer ile veri dizisinin en ortasındaki değeri karşılaştırır. Bir eşleşme olursa, o zaman ilgili index geri döndürülür. Eşleşme olmamışsa ve ortadaki değer aranan değerden büyükse, değer ortadaki indexin solundaki alt dizide, aksi halde ortadaki indexin sağındaki alt dizide aranır. Bu işlem, alt dizinin boyutu sıfıra inene kadar devam eder. Görselleştirilmiş bir örnek ile ikili aramayı daha iyi anlayacağınızı umuyorum.<br><br>
    Aşağıdaki sıralı dizide 31 değerininin indexini bulmaya çalıştığımızı varsayalım:<br><br>  &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/binary_search_0.jpg" alt="Binary Search0"/><br><br>
        Öncelikle dizinin ortasındaki indexi belirleyeceğiz:<br>
        <br><b><code> mid = low + (high - low) / 2 </code> &nbsp&nbsp --> &nbsp&nbsp <code>mid = 0 + (9 - 0) / 2 = 4.5</code></b>&nbsp&nbsp(4 tamsayı değeri)<br><br>      &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/binary_search_1.jpg" alt="Binary Search1"/><br><br>
        Yani dizinin ortasındaki indis 4 olarak bulunur. Daha sonra dizinin 4. indisindeki değer ile aranan değer yani 31 değeri karşılaştırılır. Dizinin 4. indisindeki 27 değeri ile aranan 31 değerinin eşleşmediği tespit edilir. Aranan 31 değeri 27'den büyük olduğu ve dizimiz de sıralı bir dizi olduğu için, aranan değerimiz dizinin üst kısmında(4. indisin sağ tarafındaki alt dizide) bulunabilir. Bu yüzden 31 değerini bu alt dizide aramak üzere dizimizin en küçük indisini ortanca indisten 1 büyük olmak üzere güncelleyeceğiz:<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/binary_search_2.jpg" alt="Binary Search2"/><br><br>
        <code><b> low = mid + 1 </b></code><br><code><b> mid = low + (high - low) / 2 </b></code>
        Artık yeni ortanca indisimiz 7 olduğu için, 7. indisteki değer ile 31 değerini karşılaştırıyoruz.<br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/binary_search_3.jpg" alt="Binary Search3"/><br><br>
        Dizinin 7. indisindeki değer ile aradığımız 31 değeri eşleşmediği için ve aradığımız değer bu indisteki 35 değerinden küçük olduğu için aranan değerimizi alt dizinin alt dizisinde(7. indisin sol tarafındaki yeni alt dizide) aramalıyız.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/binary_search_4.jpg" alt="Binary Search4"/><br><br>
        <code><b> high = mid - 1 </b></code><br><code><b> mid = low + (high - low) / 2 </b></code>
        Yeni ortanca indisimiz 5 olarak hesaplanmış oldu.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/binary_search_5.jpg" alt="Binary Search5"/><br><br>
        Dizinin 5. indisindeki değer ile aradığımız değeri tekrar karşılaştığımızda bir eşleşme olduğunu tespit ettik.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/binary_search_6.jpg" alt="Binary Search6"/><br><br>
        Böylece aradığımız değerin hedef veri setinin 5. indisinde bulunduğu sonucunu elde etmiş olduk.<br><br>
    </li>
    <li>
        <b>Interpolation Search</b> - İnterpolasyon arama algoritması ikili arama algoritmasına çok benzer bir algoritmadır. Yine sıralı veri setleri üzerinde, böl ve yönet prensibiyle çalışır. İkili aramadan farkı ise ikili arama algoritması ile arama yaparken dizinin ortanca elemanına bakıyorduk ve karşılaştırma sonucuna göre diziyi ikiye bölüp dizinin sağ veya sol alt dizisinde değerimizi arıyorduk. İnterpolasyon aramada ise diziyi böleceğimiz pozisyon değerini, yani merkez alınacak indisi aşağıdaki formül ile hesaplıyoruz:<br><br>
        <code><b> position = low + [  (high - low) / (array[high] - array[low]) * (value - array[low]) ] </b></code><br>
        &nbsp&nbsp&nbsp&nbsp<b><em>position</em></b>&nbsp&#x27BA;&nbspKarşılaştırma yapacağımız ve karşılaştırma sonucuna göre diziyi bölmek için baz alacağımız pozisyon<br>
        &nbsp&nbsp&nbsp&nbsp<b><em>array</em></b>&nbsp&nbsp&nbsp&nbsp&nbsp&#x27BA;&nbspArama yaptığımız dizi<br>
        &nbsp&nbsp&nbsp&nbsp<b><em>low</em></b>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&#x27BA;&nbspDizinin en küçük indisi<br>
        &nbsp&nbsp&nbsp&nbsp<b><em>high</em></b>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&#x27BA;&nbspDizinin en büyük indisi<br>
        &nbsp&nbsp&nbsp&nbsp<b><em>value</em></b>&nbsp&nbsp&nbsp&nbsp&nbsp&#x27BA;&nbspDizide bulmak için arama yaptığımız değer<br><br>
        Algoritma ise aşağıdaki adımlardan oluşuyor:<br>
        <ul>
            <li>
                Pozisyon değerini hesapla ve aranan değer ile dizinin pozisyon numaralı indisindeki değeri karşılaştır.
            </li>
            <li>
                Eşleşme olursa geriye değerin bulunduğuna dair bir sonuç döndür.
            </li>
            <li>
                Aksi halde, aranan değer dizinin ilgili indisinden küçükse sol, büyükse sağ alt dizide pozisyon hesapla ve arama yap.
            </li>
            <li>
                Eşleşme bulunana kadar veya alt dizi boyutu 0 olana kadar işlemlere devam et.
            </li>
        </ul>
    </li>
</ul>
<h3>Sorting Algorithms</h3>
<p>&nbsp&nbsp&nbsp&nbsp&nbspSıralama algoritmaları, verileri belirli bir düzende sıralama yollarını belirtir. En yaygın sıralamalar sayısal veriler veya sözlük sıralamalarıdır. Sıralamanın önemi, veriler sıralı bir şekilde saklanırsa, bu veriler üzerinde arama yapmanın çok yüksek bir performans düzeyine getirilebileceği gerçeğinde yatmaktadır. Sıralama, telefon rehberlerinde veya sözlüklerdeki kelimelerde olduğu gibi verileri daha okunabilir formatlarda göstermek için de kullanılabilir.</p>
<ul>
    <li>
        <b>Bubble Sort</b> - Kabarcık sıralama basit bir sıralama algoritmasıdır. Bu sıralama algoritması, her bir bitişik eleman çiftinin karşılaştırıldığı ve sıralı olmadıklarında elemanların yer değiştirildiği karşılaştırma tabanlı bir algoritmadır. Bu algoritma, büyük veri kümeleri için uygun değildir. Çünkü n elemanlı bir dizi için ortalama ve en kötü durum karmaşıklığı O(n<sup>2</sup>)'dir. Aşağıdaki örnek ile kabarcık algoritmasını görselleştirerek anlamaya çalışalım:<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/bubble_sort_0.jpg" alt="Bubble Sort0"/><br><br>
        Şekildeki gibi sıralanmamış ve kısa bir diziyi kabarcık sıralama algoritması ile sıralayacağız. Bunun için ilk iki elemandan başlayarak ikişerli ikişerli karşılaştırma yapacağız.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/bubble_sort_1.jpg" alt="Bubble Sort1"/><br><br>
        İlk karşılaştırmada 33 değeri zaten 14 değerinden büyük olduğu için ilk 2 değerin zaten sıralanmış olduğunu görüyoruz. Bu yüzden yer değiştirme yapmadan sonraki 2 değer olan 33 ile 27 değerini karşılaştırıyoruz.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/bubble_sort_2.jpg" alt="Bubble Sort2"/><br><br>
        27 değeri ile 33 değerini karşılaştırdığımızda 27 değeri 33 değerinden küçük olduğu için bu iki değerin yer değiştirmesi gerektiğini tespit ettik.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/bubble_sort_3.jpg" alt="Bubble Sort3"/><br><br>
        Yer değiştirme işleminden sonra dizimiz aşağıdaki gibi olmalı:<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/bubble_sort_4.jpg" alt="Bubble Sort4"/><br><br>
        Sıralama işlemine kaldığımız yerden devam ediyoruz ve 33 ile 35 değerlerini karşılaştırıyoruz.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/bubble_sort_5.jpg" alt="Bubble Sort5"/><br><br>
        Zaten sıralı oldukları için yer değiştirme yapmadan sıralama işlemine devam ediyoruz ve 35 ile 10 değerlerini karşılaştırıyoruz.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/bubble_sort_6.jpg" alt="Bubble Sort6"/><br><br>
        10 değeri 35 değerinden küçük olduğu için sıralı olmadıklarını ve bu 2 değerin yer değiştirmesi gerektiğini tespi ettik.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/bubble_sort_7.jpg" alt="Bubble Sort7"/><br><br>
        Bu 2 değerin yerlerini değiştiriyoruz ve dizinin sonuna geldiğimizi görüyoruz. Böylece dizideki en büyük eleman dizinin sonuncu indisine yerleşti ve dizimiz şimdilik aşağıdaki gibi oldu.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/bubble_sort_8.jpg" alt="Bubble Sort8"/><br><br>
        Tüm dizi sıralanana kadar algoritmayı uygulamaya devam ediyoruz ve bunun için tekrar ilk indisten başlayarak son indis hariç bir şekilde aynı işlemleri uyguluyoruz. Böylece bir sonraki iterasyonda dizimiz aşağıdaki gibi görünecektir.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/bubble_sort_9.jpg" alt="Bubble Sort9"/><br><br>
        Bir sonraki iterasyondan sonra ise dizimiz aşağıdaki gibi görünüyor ve her iterasyondan sonra en az 1 değerin yer değiştirdiğini görüyoruz.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/bubble_sort_10.jpg" alt="Bubble Sort10"/><br><br>
        İterasyonlara devam ederken herhangi bir yer değiştirme işlemine gerek kalmadığında kabarcık sıralama algoritması ile verilerimizi sıralamış oluruz ve nihai olarak dizimiz aşağıdaki gibi olur.<br><br>
 &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/bubble_sort_11.jpg" alt="Bubble Sort11"/><br><br>
    </li>
</ul>
