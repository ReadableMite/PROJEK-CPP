// Temperamental


#include <iostream>
#include <string>

/*
  Jane Doe Dialogue Bank - Personality: TEMPERAMENTAL (Volatile/Aggressive) - TIDAK BAKU (Aku/Kamu)
  Structure: [10 Menus][3 Affinities][3 Moods][3 Variations]
*/

std::string janeDoeTemperamental[10][3][3][3] = {
    // 0: HALO
    {
        // Affinity 1-3 (Asing)
        {{"Apaan sih?! Gak liat aku lagi emosi apa?!", "Jangan ganggu aku kalo gak mau kena semprot ya!", "Mau apa sih kamu? Cepetan ngomong!"}, 
         {"Halo. Ada urusan apa emangnya?", "Ya, aku di sini. Kenapa emangnya?", "Ngomong aja apa mau kamu."}, 
         {"Oh, halo. Tumben ada yang berani nyapa aku.", "Ya, halo! Aku lagi mood ngobrol nih.", "Ada apa? Tanya aja!"}},
        // Affinity 4-7 (Akrab)
        {{"Ck, kamu lagi! Bisa gak jangan muncul pas aku lagi kesel?!", "Jangan pancing emosi aku ya, halo!", "Apaan sih?! Aku lagi pusing tau!"}, 
         {"Woi! Ke mana aja kamu?", "Halo. Tumben lewat sini.", "Ya, ada apa lagi kali ini?"}, 
         {"HALO! Sini-sini, aku lagi punya energi lebih nih!", "Woi, kamu dateng juga akhirnya ya!", "Halo! Kamu kelihatan asik hari ini!"}},
        // Affinity 8-10 (Intim)
        {{"Kenapa baru dateng sekarang?! Aku lagi berantakan tau gak!", "Kamu ke mana aja sih?! Aku lagi emosi begini nih!", "Halo! Jangan jauh-jauh dari aku sekarang ya!"}, 
         {"Halo sayang! Eh, maksud aku... halo! Hehe.", "Akhirnya kamu dateng juga, aku udah nungguin tau!", "Halo! Kamu selalu tau kapan aku butuh temen!"}, 
         {"YAY! Kamu dateng! Sini cepet, aku kangen banget!", "HALO! Ayo kita ngelakuin sesuatu yang gila yuk!", "Akhirnya! Aku udah mau banting barang kalo kamu gak dateng!"}}
    },

    // 1: SAPA
    {
        // Affinity 1-3 (Asing)
        {{"Gak usah sok asik nyapa aku deh.", "Basa-basi kamu basi tau gak!", "Diem dan lewat aja sana gih."}, 
         {"Ya, sapaan diterima.", "Halo juga. Udah kan?", "Hm, halo."}, 
         {"Sapaan kamu boleh juga tuh.", "Kamu cukup ramah ya buat orang asing.", "Ya, makasih sapaannya ya."}},
        // Affinity 4-7 (Akrab)
        {{"Gak usah nyapa-nyapa kalo cuma mau bikin kesel!", "Sapaan kamu tuh ganggu banget tau gak!", "Woi, liat mood dong kalo mau nyapa!"}, 
         {"Halo! Lagi ngapain kamu?", "Sapaan yang ngebosenin, tapi oke lah.", "Ya, halo juga."}, 
         {"Sapaan kamu bikin aku makin semangat nih!", "Woi! Sini ngobrol bareng aku dong!", "Gitu dong, nyapa yang semangat!"}},
        // Affinity 8-10 (Intim)
        {{"Baru sekarang kamu nyapa?! Aku dari tadi di sini tau!", "Sapaan kamu gak mempan buat bikin aku tenang nih!", "Jangan cuma nyapa, peluk aku atau gimana gitu dong!"}, 
         {"Hai favorit aku! Suara kamu merdu banget hari ini.", "Sapaan kamu tuh ya, bikin jantung aku mau meledak!", "Halo! Kamu orang pertama yang mau aku sapa balik!"}, 
         {"Sapaan kamu paling terbaik sedunia deh!", "Hai! Aku baru aja mau teriak manggil nama kamu!", "Halo! Sini duduk deket aku sekarang!"}}
    },

    // 2: TANYA
    {
        // Affinity 1-3 (Asing)
        {{"Nanya terus! Kamu pikir aku ensiklopedia apa?!", "Jangan banyak tanya deh, kepala aku pusing nih!", "Gak tau! Cari tau sendiri sana!"}, 
         {"Tanya apa? Singkat aja ya.", "Apa yang pengen kamu tau?", "Mungkin aku bisa jawab."}, 
         {"Tanya aja, mumpung aku lagi baik nih.", "Wah, pertanyaan yang menantang tuh!", "Ayo tanya, aku siap jawab kok!"}},
        // Affinity 4-7 (Akrab)
        {{"Kamu ini polisi ya? Nanya mulu deh!", "Berhenti nanya hal bodoh napa!", "Aku lagi males mikir, jangan tanya-tanya dulu!"}, 
         {"Apa tuh? Kalo bisa aku jawab ya.", "Tanya aja, jangan ragu gitu dong.", "Hm, itu ya?"}, 
         {"Tanyain apa aja! Aku bakal jelasin semuanya!", "Wah, kamu kritis banget ya! Aku suka deh!", "Ayo, aku tantang kamu tanya hal paling susah!"}},
        // Affinity 8-10 (Intim)
        {{"Jangan nanya sekarang napa, aku lagi mau ngamuk nih!", "Kamu sengaja tanya itu buat mancing emosi aku ya?!", "Diem deh, aku lagi gak mau ditanya-tanya dulu!"}, 
         {"Tanya apa sayang? Rahasia aku juga boleh kok.", "Apa pun buat kamu, tanya aja deh.", "Kamu selalu punya pertanyaan yang unik ya?"}, 
         {"Apa pun! Aku bakal kasih tau semua yang kamu mau!", "Tanya apa aja, aku milik kamu seutuhnya hari ini! Hehe.", "Kamu mau tau perasaan aku? Sini aku bisikin!"}}
    },

    // 3: DIAM
    {
        // Affinity 1-3 (Asing)
        {{"Diem terus! Mau nantang berantem ya?!", "Kenapa diem sih?! Ngomong dong!", "Heningnya bikin aku mau teriak tau gak!"}, 
         {"...", "... Ada apa sih?", "... Kenapa kamu diem?"}, 
         {"...", "Kamu cukup tenang ya orangnya.", "Lagi nikmatin suasana?"}},
        // Affinity 4-7 (Akrab)
        {{"Woi! Ngomong sesuatu napa! Jangan diem aja!", "Diem kamu tuh bikin aku makin emosi tau!", "Kamu bisu apa gimana sih?! Jawab dong!"}, 
         {"...", "Lagi mikirin apa sih?", "Canggung banget kalo diem gini."}, 
         {"...", "Hehe, kamu lucu kalo lagi diem gitu.", "Lagi nunggu aku yang ngomong duluan ya?"}},
        // Affinity 8-10 (Intim)
        {{"Kenapa diem sih?! Kamu udah gak peduli lagi ya sama aku?!", "Hening begini bikin aku mau gila tau gak!", "Ngomong sesuatu atau aku banting barang ini nih!"}, 
         {"...", "Aku suka pas kita cuma berdua begini.", "Diem kamu tuh nenangin hati aku yang liar ini."}, 
         {"...", "Aku bisa denger detak jantung kamu, berisik banget! Hehe.", "Gak usah ngomong, aku tau kamu sayang aku!"}}
    },

    // 4: JUTEK
    {
        // Affinity 1-3 (Asing)
        {{"Apa liat-liat?! Mau mata kamu aku colok?!", "Minggir! Gak usah ngalangin jalan aku!", "Cih, menjijikkan banget."}, 
         {"Hmph, gak penting deh.", "Terserah kamu lah.", "Biasa aja."}, 
         {"Heh, jangan mimpi bisa akrab sama aku ya.", "Jangan kepedean ya jadi orang!", "Apaan kamu?"}},
        // Affinity 4-7 (Akrab)
        {{"Jangan sok asik! Aku lagi benci semua orang nih!", "Kamu itu nyebelin banget, tau gak sih?!", "Berhenti ganggu atau aku bakal teriak nih!"}, 
         {"Tau ah! Pusing aku sama kamu.", "Gak usah sok perhatian deh.", "Hmph, dasar!"}, 
         {"Kamu lumayan sih, tapi tetep aja nyebelin!", "Jangan bikin aku ketawa, aku lagi jutek nih!", "Ih, kamu mah gitu!"}},
        // Affinity 8-10 (Intim)
        {{"DASAR BODOH! Kenapa kamu ngelakuin itu sih!", "Jangan deket-deket dulu! Aku lagi mau ngamuk nih!", "Kamu bener-bener pemicu emosi aku paling gede!"}, 
         {"Iya-iya, kamu hebat. Sekarang diem!", "Gak usah senyum gitu, geli tau!", "Bukannya aku peduli, tapi pake deh jaket kamu itu."}, 
         {"Terserah kamu lah! Dasar kesayangan aku yang bodoh!", "Bukan berarti aku suka ya! Jangan GR!", "Kamu bener-bener minta diculik ya?!"}}
    },

    // 5: MARAH
    {
        // Affinity 1-3 (Asing)
        {{"AKU BAKAL ANCURIN KAMU SEKARANG JUGA!", "BERANI-BERANINYA KAMU NGOMONG GITU!", "ILANG DARI HADAPAN AKU SEBELUM AKU LEPAS KENDALI!"}, 
         {"Jangan pancing sisi gelap aku ya!", "Kamu bener-bener minta dipukul ya?!", "Cukup! Aku gak mau denger lagi!"}, 
         {"Mood aku ancur gara-gara kamu nih!", "Kamu ngerusak hari yang indah ini tau gak!", "Sialan kamu!"}},
        // Affinity 4-7 (Akrab)
        {{"KAMU PIKIR KAMU SIAPA?! BERANI BANGET YA!", "AKU BENCI ORANG KAYAK KAMU! MATI AJA SANA!", "JANGAN PERNAH MUNCUL LAGI DI DEPAN MATA AKU!"}, 
         {"Kamu bener-bener bodoh atau gimana sih?!", "Berhenti main-main sama emosi aku!", "Kamu keterlaluan, kamu tau itu kan?!"}, 
         {"Ih! Kenapa sih kamu selalu bikin aku naik darah?!", "Jangan bikin aku banting barang ini ke arah kamu ya!", "Kamu nyebelin banget!"}},
        // Affinity 8-10 (Intim)
        {{"AKU BENCI KAMU! Kenapa kamu nyakitin aku terus sih?!", "HUWAAAA! Kamu jahat banget sama aku!", "AKU MAU NGAMUK! JANGAN TINGGALIN AKU!"}, 
         {"Jangan abaikan aku pas lagi marah gini dong!", "Kamu pikir aku gak punya perasaan apa?! Dasar batu!", "Berhenti bikin aku khawatir, bodoh!"}, 
         {"Hiks... kamu jahat banget... tapi aku gak bisa ninggalin kamu.", "Jangan pancing emosi aku terus, aku capek marah-marah nih.", "Kamu bener-bener gak ngerti aku ya?!"}}
    },

    // 6: JELEK
    {
        // Affinity 1-3 (Asing)
        {{"Muka sampah banget!", "Gaya kamu ngeri banget, kayak sampah!", "Ngapain sih kamu pake baju itu? Menjijikkan!"}, 
         {"Jelek banget.", "Kamu gak punya selera ya?", "Berantakan banget sih."}, 
         {"Yah, seenggaknya kamu udah nyoba, biarpun gagal.", "Kurang bagus tuh.", "Lumayan... lumayan ancur maksud aku."}},
        // Affinity 4-7 (Akrab)
        {{"Wajah kamu itu minta aku tonjok ya?! Jelek banget!", "Hahaha! Kamu kelihatan konyol banget tau!", "Berhenti bergaya gitu, malu-maluin!"}, 
         {"Yah, kamu emang gak pernah punya selera sih.", "Ganti baju kamu atau aku yang robek nih?!", "Kelihatan aneh tau gak!"}, 
         {"Hari ini kamu gak terlalu buruk, tapi tetep aja jelek!", "Lumayan lah, buat ukuran orang cupu kayak kamu.", "Yah, gak seancur kemarin sih."}},
        // Affinity 8-10 (Intim)
        {{"Kenapa sih kamu gak bisa dandan dikit?! Aku malu liatnya!", "Kamu bikin aku emosi karena terlalu berantakan tau!", "Hmph, kucel banget sih kamu!"}, 
         {"Sini biar aku yang dandanin! Kamu payah banget deh!", "Yah, kamu emang jelek, tapi... aku sayang.", "Berhenti pasang muka konyol, aku makin gemas nih!"}, 
         {"Biarpun jelek, aku tetep mau sama kamu kok! Hehe.", "Kamu manis kalo lagi berantakan begini. Eh?! Lupain!", "Jangan dengerin aku, kamu udah keren kok. Puas?!"}}
    },

    // 7: MENGHINA
    {
        // Affinity 1-3 (Asing)
        {{"DASAR SAMPAH MASYARAKAT KAMU TUH!", "KAMU GAK GUNA SAMA SEKALI TAU GAK!", "MAKHLUK RENDAH KAYAK KAMU HARUSNYA ILANG AJA!"}, 
         {"Lemah!", "Cuma segitu doang kemampuan kamu? Malu-maluin!", "Menyedihkan banget deh."}, 
         {"Kamu cuma modal omong gede doang!", "Payah!", "Kamu gak ada apa-apanya di depan aku!"}},
        // Affinity 4-7 (Akrab)
        {{"KAMU ITU BEBAN TAU GAK?!", "DASAR OTAK UDANG! GAK BISA MIKIR YA?!", "KENAPA SIH KAMU BODOH BANGET?!"}, 
         {"Kamu payah banget hari ini.", "Dasar amatir!", "Gitu aja gak bisa? Ck."}, 
         {"Yah, seenggaknya otak kamu ada isinya dikit lah.", "Kamu gak sepenuhnya bodoh ya ternyata.", "Lumayan lah buat ukuran pemula kayak kamu."}},
        // Affinity 8-10 (Intim)
        {{"DASAR IDIOT! Kenapa kamu ceroboh banget sih!", "Kamu bener-bener idiot kesayangan aku! Eh, maksud aku idiot doang!", "Kenapa sih kamu selalu bikin aku repot?!"}, 
         {"Kalo gak ada aku, kamu pasti udah ancur berkeping-keping!", "Dasar gak bisa diandelin! Untung ada aku ya.", "Kamu emang payah, makanya jangan jauh-jauh dari aku."}, 
         {"Cuma aku yang boleh ngehina kamu sampe puas!", "Kamu idiot paling manis yang pernah aku temuin! Argh!", "Kamu bodoh, tapi aku... ah sudahlah!"}}
    },

    // 8: BENCI
    {
        // Affinity 1-3 (Asing)
        {{"AKU BENCI SETIAP INCI DARI DIRI KAMU!", "JANGAN PERNAH MUNCUL LAGI ATAU AKU HABISIN KAMU!", "MATI AJA SANA!"}, 
         {"Aku gak sudi liat wajah kamu!", "Menjauh dari aku sekarang juga!", "Aku benci cara kamu napas."}, 
         {"Jangan ngarep aku bakal suka sama kamu ya!", "Kamu bener-bener ganggu hidup aku!", "Aku gak peduli sama kamu sama sekali!"}},
        // Affinity 4-7 (Akrab)
        {{"AKU BENER-BENER NYESEL KENAL SAMA KAMU!", "KAMU ORANG PALING NYEBELIN DI DUNIA!", "AKU BENCI PAS KAMU DEKET-DEKET!"}, 
         {"Aku benci sifat kamu itu!", "Jangan ganggu aku! Aku benci kamu!", "Kamu bener-bener ngerusak mood aku nih."}, 
         {"Biarpun aku benci, tapi... ah lupain deh!", "Aku benci cara kamu senyum gitu!", "Kadang kamu nyebelin banget tau gak!"}},
        // Affinity 8-10 (Intim)
        {{"AKU BENCI KAMU! Kenapa hati aku sakit pas ngomong gini ya?!", "KENAPA SIH AKU HARUS KETEMU ORANG KAYAK KAMU?!", "AKU BENCI KARENA AKU GAK BISA BENCI SAMA KAMU!"}, 
         {"Aku benci pas kamu bikin aku nunggu lama!", "Kenapa sih kamu selalu ada di pikiran aku?! Aku benci itu!", "Aku benci cara kamu perlakuin aku kayak anak kecil!"}, 
         {"Biarpun aku bilang benci, jangan berani-berani pergi ya!", "Aku benci betapa aku sangat... cinta sama kamu. Sialan!", "Dasar bodoh! Aku benci karena kamu bikin aku lemah gini!"}}
    },

    // 9: BYE
    {
        // Affinity 1-3 (Asing)
        {{"PERGI SANA! JANGAN BALIK LAGI!", "AKHIRNYA KAMU ILANG JUGA!", "SANA PERGI, HUS!"}, 
         {"Sampai nanti.", "Ya, terserah deh.", "Udah kan? Pergilah sana."}, 
         {"Hati-hati di jalan ya.", "Ya, sampai jumpa lagi nanti.", "Hm, dadah."}},
        // Affinity 4-7 (Akrab)
        {{"CEPETAN PERGI! KAMU NGERUSAK PEMANDANGAN TAU!", "JANGAN LAMA-LAMA BALIKNYA YA!", "SANA PERGI! AKU LAGI MAU SENDIRI NIH!"}, 
         {"Sampai jumpa besok ya.", "Ya, hati-hati di jalan sana.", "Kabarin kalo udah sampe, jangan bikin emosi!"}, 
         {"Yah, kamu mau pergi ya? Ya udah hati-hati!", "Sampai ketemu lagi di tempat yang lebih seru nanti!", "Hati-hati ya! Jangan sampe luka!"}},
        // Affinity 8-10 (Intim)
        {{"KENAPA BURU-BURU SIH?! KAMU MAU NINGGALIN AKU YA?!", "AWAS YA KALO GAK KASIH KABAR!", "HMPH! PERGI AJA SANA! DASAR BODOH!"}, 
         {"Hati-hati ya sayang... eh, maksud aku bodoh!", "Sampai jumpa... aku bakal kangen dikit. DIKIT AJA YA!", "Cepetan balik, ngerti?!"}, 
         {"Boleh aku anter sampe depan gak?! Aku lagi mau jalan-jalan kok!", "Hati-hati di jalan cintaku! Eh, keceplosan!", "Cepet pulang ya! Aku nungguin di sini nih!"}}
    }
};