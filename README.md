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
                <b>For Ordered List</b> : Sıralı veri dizisinde ise aranan eleman dizideki her elemanla kıyaslanırken eğer kıyaslandığı elemandan küçük(veri dizisi küçükten büyüğe doğru sıralanmış ise) olduğu bir durum olursa, dizi sıralı olduğu için aranan elemanın ilgili index'ten sonra bulunabilme ihtimali olmayacağı için arama otomatik olarak sonlandırılır. Böylece zaman açısından daha verimli bir sonuç elde edilir.
            </li>
        </ul>
    </li>
    <li>
        <b>Jump Search</b>
    </li>
    <li>
        <b>Binary Search</b> - İkili arama böl ve yönet prensibi ile çalışan hızlı bir arama algoritmasıdır. Bu algoritma sıralı veri setleri üzerinde düzgün olarak çalışır. İkili arama, aranan değer ile veri dizisinin en ortasındaki değeri karşılaştırır. Bir eşleşme olursa, o zaman ilgili index geri döndürülür. Eşleşme olmamışsa ve ortadaki değer aranan değerden büyükse, değer ortadaki indexin solundaki alt dizide, aksi halde ortadaki indexin sağındaki alt dizide aranır. Bu işlem, alt dizinin boyutu sıfıra inene kadar devam eder. Görselleştirilmiş bir örnek ile ikili aramayı daha iyi anlayacağınızı umuyorum.<br><br>
    Aşağıdaki sıralı dizide 31 değerininin indexini bulmaya çalıştığımızı varsayalım:<br><br>  &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/binary_search_0.jpg" alt="Binary Search0"/><br><br>
        Öncelikle dizinin ortasındaki indexi belirleyeceğiz:<br>
        <br><code><b> mid = low + (high - low) / 2 </code> &nbsp&nbsp --> &nbsp&nbsp <code>mid = 0 + (9 - 0) / 2 = 4.5</code></b>&nbsp&nbsp(4 tamsayı değeri)<br><br>      &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/binary_search_1.jpg" alt="Binary Search1"/><br><br>
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
        Böylece aradığımız değerin hedef veri setinin 5. indisinde bulunduğu sonucunu elde ettik.
    </li>
</ul>
