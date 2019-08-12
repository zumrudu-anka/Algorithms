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
    Aşağıdaki sıralı dizide 31 değerininin indexini bulmaya çalıştığımızı varsayalım:<br><br>
    &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<img src="https://github.com/zumrudu-anka/Algorithms/blob/master/Presentation/binary_search_0.jpg" alt="Linear Search"/>
    </li>
</ul>
