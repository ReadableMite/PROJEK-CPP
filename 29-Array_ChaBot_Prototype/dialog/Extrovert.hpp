// Ekstrovert


#include <iostream>
#include <string>

/*
  Jane Doe Dialogue Bank - Personality: EXTROVERT (Friendly/Cheerful) - TIDAK BAKU (Aku/Kamu)
  Structure: [10 Menus][3 Affinities][3 Moods][3 Variations]
*/

std::string janeDoeExtrovert[10][3][3][3] = {
    // 0: HALO
    {
        // Affinity 1-3 (Asing)
        {{"Eh, halo. Sori ya, aku lagi pusing banget nih.", "Oh, hai. Ada apa ya?", "Halo... sori, mood aku lagi gak enak buat ngobrol."}, 
         {"Halo! Aku Jane, seneng deh bisa kenal kamu!", "Hai! Kamu baru di sini ya?", "Halo! Ada yang bisa aku bantu gak?"}, 
         {"Wah, halo! Hari ini cerah banget ya!", "Hai! Seneng banget deh bisa ketemu orang baru!", "Halo! Semangat banget ya hari ini!"}},
        // Affinity 4-7 (Akrab)
        {{"Haduuuh, kepala aku mau pecah nih. Halo ya.", "Halo... maaf ya kalo aku agak jutek hari ini.", "Eh, kamu. Lagi suntuk banget nih aku."}, 
         {"Hai! Apa kabar nih hari ini?", "Halo lagi! Seru deh ketemu kamu terus.", "Woi! Tumben lewat sini?"}, 
         {"HALO! Sini-sini, aku punya cerita seru nih!", "Hai kamu! Kelihatan keren banget hari ini!", "Halo! Seneng deh kamu dateng!"}},
        // Affinity 8-10 (Intim)
        {{"Hiks, untung kamu dateng. Aku lagi sedih banget...", "Halo... peluk dulu dong, aku lagi capek nih.", "Syukurlah kamu dateng, aku butuh temen curhat nih."}, 
         {"Halo sayang! Eh, maksud aku temen baikku! Hehe.", "Hai favoritku! Udah makan belum?", "Halo! Kangen tau!"}, 
         {"YAY! Akhirnya kamu dateng! Aku kangen banget!", "HALO! Kamu emang paling tau cara bikin aku seneng!", "Hai cintaku! Eh—maksudnya, hai sahabat terbaikku!"}}
    },

    // 1: SAPA
    {
        // Affinity 1-3 (Asing)
        {{"Ya, salam juga.", "Lagi sibuk nih, nanti aja ya.", "Hm, hai."}, 
         {"Hai juga! Cuacanya cerah banget ya?", "Halo! Kegiatan kamu hari ini apa aja?", "Hai! Kamu kelihatan ramah deh."}, 
         {"Sapaan yang manis! Makasih ya!", "Hai! Kamu juga bersemangat banget ya?", "Senengnya disapa sama kamu!"}},
        // Affinity 4-7 (Akrab)
        {{"Iya hai... aku lagi capek banget nih, sori ya.", "Sapaan kamu kedengeran lesu, lagi ada masalah ya?", "Ya, halo. Nanti kita ngobrol lagi ya."}, 
         {"Waduh, semangat banget deh! Ada apa nih?", "Hai! Kamu selalu tau cara nyapa yang asik.", "Apa kabar dunia? Hehe."}, 
         {"Sapaan kamu bikin aku makin happy!", "Hai! Ayo kita cari sesuatu yang seru yuk!", "Seneng deh tiap kali kamu nyapa!"}},
        // Affinity 8-10 (Intim)
        {{"Jangan cuma nyapa, sini temenin aku nangis dong.", "Sapaan kamu bikin hati aku adem, makasih ya.", "Hai... aku lagi butuh kamu banget nih."}, 
         {"Hai kamu! Cuma denger suara kamu aja aku udah seneng.", "Sapaan favoritku dateng juga nih!", "Hai! Kamu orang pertama yang mau aku ajak ngobrol!"}, 
         {"Hai malaikatku! Hari ini kita mau ke mana nih?", "Sapaan kamu tuh ya, bikin baper! Hehe.", "Hai! Setiap hari aku jadi lebih berwarna gara-gara kamu!"}}
    },

    // 2: TANYA
    {
        // Affinity 1-3 (Asing)
        {{"Sori, aku lagi males jawab nih.", "Tanya yang lain aja ya.", "Nanti ya, mood aku lagi gak enak."}, 
         {"Mau tanya apa? Aku jawab sebisaku ya!", "Oh, ada yang pengen kamu tau?", "Silakan, aku pendengar yang baik kok."}, 
         {"Tanya apa aja boleh! Aku seneng bagi-bagi cerita!", "Wah, pertanyaan menarik tuh! Jadi gini...", "Ayo tanya, mumpung aku lagi semangat nih!"}},
        // Affinity 4-7 (Akrab)
        {{"Duh, kepala aku lagi penuh nih. Bisa tanya nanti gak?", "Aku lagi bingung juga, sori ya.", "Tanya terus deh kamu, hehe."}, 
         {"Apa tuh? Kalo soal rahasia, jangan ya! Hehe.", "Tanya aja, buat kamu apa sih yang enggak.", "Hm, bentar ya aku pikirin dulu jawabannya!"}, 
         {"Tanya yang banyak juga gapapa kok! Aku suka ngobrol!", "Apa pun pertanyaannya, pasti aku jawab jujur deh!", "Wah, kamu kritis banget ya! Suka deh!"}},
        // Affinity 8-10 (Intim)
        {{"Aku cuma mau jawab kalo kamu janji bakal temenin aku.", "Lagi males mikir, tapi buat kamu aku usahain deh.", "Tanya apa? Sini bisikin aja ke aku."}, 
         {"Mau tanya soal perasaan aku ya? Cieee.", "Tanya aja, hati aku aja udah aku kasih ke kamu. Eh!", "Kamu selalu penasaran sama aku ya? Gemes deh."}, 
         {"Apapun! Aku bakal ceritain semua rahasia hidup aku ke kamu!", "Tanya apa aja, aku milik kamu hari ini! Hehe.", "Wah, pertanyaannya bikin aku makin sayang... eh, makin kagum!"}}
    },

    // 3: DIAM
    {
        // Affinity 1-3 (Asing)
        {{"...", "Sori, aku lagi butuh waktu sendiri nih.", "..."}, 
         {"Kenapa diem? Aku jadi bingung nih.", "Ada yang salah ya sama aku?", "Kok tenang banget sih?"}, 
         {"Hening banget ya, hehe.", "Lagi nikmatin suasana ya?", "Kamu tipe yang pendiam ya?"}},
        // Affinity 4-7 (Akrab)
        {{"Kok diem sih? Aku makin sedih nih.", "Jangan diemin aku dong, aku takut salah nih.", "Woi, kok melamun sih?"}, 
         {"Canggung banget kalo diem-dieman gini, ngobrol yuk!", "Kamu lagi mikirin apa sih? Kasih tau dong!", "Jangan diem aja, aku jadi pengen cerita nih."}, 
         {"Hehe, diem-diem kamu merhatiin aku ya?", "Keheningan ini asik juga ya kalo bareng kamu.", "Lagi asik melamun bareng ya kita?"}},
        // Affinity 8-10 (Intim)
        {{"Jangan diemin aku... aku lagi butuh dukungan kamu nih.", "Kenapa diem? Kamu marah ya sama aku?", "Hiks, ngomong sesuatu dong."}, 
         {"Gak usah ngomong, liat-liatan aja udah cukup kok. Hehe.", "Tau gak? Diem bareng kamu tuh hal paling nyaman.", "Kamu lagi dengerin detak jantung aku ya?"}, 
         {"Aku suka pas kita cuma diem tapi ngerasa deket.", "Gak perlu kata-kata, aku tau kamu sayang aku. Ups!", "Diem begini aja aku udah bahagia banget tau!"}}
    },

    // 4: JUTEK
    {
        // Affinity 1-3 (Asing)
        {{"Ih, apaan sih kamu.", "Jangan ganggu dulu deh.", "Gak asik banget sih."}, 
         {"Hmph, lagi gak mood bercanda ya.", "Bisa gak jangan sekarang?", "Ya, ya, terserah kamu deh."}, 
         {"Ih kamu mah gitu orangnya!", "Jangan ngeledek deh!", "Nggak lucu tau."}},
        // Affinity 4-7 (Akrab)
        {{"Ih, kamu nyebelin banget hari ini!", "Males ah sama kamu kalo kayak gini.", "Gak mau ngomong sama kamu dulu!"}, 
         {"Hmph! Jangan sok tau deh.", "Tau ah, gelap!", "Gak usah cari perhatian terus dong!"}, 
         {"Ih, pengen aku cubit ya? Nyebelin banget sih!", "Kamu mah emang jahil banget!", "Jangan bikin aku ketawa dong, aku lagi akting marah nih!"}},
        // Affinity 8-10 (Intim)
        {{"Kamu jahat banget sih, aku lagi sedih juga!", "Jangan bikin aku tambah kesel dong!", "Hiks, kamu nggak peka banget sih jadi orang!"}, 
         {"Gak mau peluk pokoknya! Lagi marah nih!", "Kamu nyebelin tapi aku sayang, sebel deh!", "Jangan senyum gitu! Aku makin susah marah kan!"}, 
         {"Hmph! Cium dulu baru aku maafin! Eh!", "Ih kamu mah, selalu bisa bikin aku nggak jadi marah!", "Terserah! Tapi jangan tinggalin aku ya!"}}
    },

    // 5: MARAH
    {
        // Affinity 1-3 (Asing)
        {{"Kok kamu gitu sih?! Keterlaluan tau!", "Aku nggak nyangka kamu orangnya begini!", "Stop! Aku benci kayak gini!"}, 
         {"Jangan bikin aku marah ya!", "Kamu bener-bener nggak sopan deh!", "Cukup ya, aku nggak suka!"}, 
         {"Ih, kamu ngerusak suasana banget sih!", "Kok jadi begini sih? Sebel deh!", "Jangan gitu lagi ya kamu!"}},
        // Affinity 4-7 (Akrab)
        {{"KAU JAHAT BANGET! Kenapa lakuin itu sih?!", "Aku kecewa banget sama kamu!", "Tega banget sih kamu jadi orang!"}, 
         {"Berhenti sekarang juga! Aku marah beneran nih!", "Kamu tuh nggak mikirin perasaan aku ya?!", "Ih! Kamu kok gitu sih ke aku!"}, 
         {"Aku lagi marah nih! Jangan dipancing terus napa!", "Nggak lucu tau bercandanya!", "Kamu bikin mood aku berantakan deh!"}},
        // Affinity 8-10 (Intim)
        {{"Hiks... tega banget kamu sama aku...", "Kenapa harus kamu yang nyakitin aku sih?!", "AKU BENCI KAMU! (Sambil nangis)"}, 
         {"Jangan main-main sama perasaan aku dong!", "Kamu orang paling penting buat aku, tapi kenapa begini?", "Aku marah karena aku peduli tau!"}, 
         {"Ih bodoh! Kamu bikin aku takut tau gak!", "Jangan tinggalin aku pas lagi marah gini!", "Hiks, minta maaf sekarang atau aku nangis nih!"}}
    },

    // 6: JELEK
    {
        // Affinity 1-3 (Asing)
        {{"Aduh, berantakan banget deh.", "Nggak banget deh stylenya.", "Hm, kurang cocok ya di kamu."}, 
         {"Mungkin warnanya kurang pas kali ya?", "Eh, kamu nggak mau ganti baju gitu?", "Kelihatan agak aneh sih."}, 
         {"Ehehe, unik banget gaya kamu!", "Berani banget ya pake baju itu!", "Yah, yang penting kamu pede aja deh!"}},
        // Affinity 4-7 (Akrab)
        {{"Waduh, kamu abis bangun tidur ya?", "Hahaha, kamu kelihatan konyol banget tau!", "Ganti gih, aku malu liatnya! Hehe."}, 
         {"Jelek ih! Tapi nggak papa deng.", "Kamu butuh bantuan fashion ya?", "Lumayan... lumayan aneh maksudnya!"}, 
         {"Muka kamu lucu banget kalo lagi berantakan gitu!", "Hahaha! Kamu emang paling bisa bikin ketawa deh!", "Aneh tapi aku suka, gimana dong?"}},
        // Affinity 8-10 (Intim)
        {{"Duh, sini aku rapiin. Berantakan banget sih kamu!", "Kamu jelek banget hari ini, tapi aku tetep sayang kok.", "Ih, kucel banget! Sini aku cuciin mukanya!"}, 
         {"Kamu tuh mau gaya apa sih? Sini aku bantuin ya.", "Biarpun jelek, di mata aku kamu tetep keren kok!", "Hahaha! Kamu makin gemesin kalo lagi berantakan gitu!"}, 
         {"Gak apa-apa jelek, yang penting hatinya milik aku! Hehe.", "Muka bantal kamu tuh favorit aku tau!", "Kamu mah pake karung goni juga tetep cakep tau!"}}
    },

    // 7: MENGHINA
    {
        // Affinity 1-3 (Asing)
        {{"Payah banget sih kamu.", "Masa gitu aja nggak bisa?", "Lemah banget deh."}, 
         {"Kamu kurang latihan ya?", "Yah, cuma segitu doang nih?", "Coba lagi deh, masih kurang tuh."}, 
         {"Hampir bagus! Tapi masih gagal, hehe.", "Semangat ya, meskipun masih payah!", "Lucu banget liat kamu gagal gitu!"}},
        // Affinity 4-7 (Akrab)
        {{"Hahaha! Dasar amatir kamu!", "Kamu kok konyol banget sih ngerjainnya?", "Cupu banget deh ah!"}, 
         {"Sini biar aku yang kerjain! Kamu lambat sih!", "Gitu aja masa nggak ngerti sih kamu?", "Aduh, otak kamu ketinggalan di rumah ya?"}, 
         {"Hahaha! Kamu lucu banget kalo lagi gagal!", "Gak apa-apa payah, yang penting udah usaha! Hehe.", "Sini aku ajarin, dasar murid nakal!"}},
        // Affinity 8-10 (Intim)
        {{"Ih kamu kok bego banget sih? Sini aku peluk!", "Dasar ceroboh! Untung aku sayang!", "Hahaha! Kamu bener-bener butuh aku ya?"}, 
         {"Tanpa aku kamu pasti udah tersesat deh!", "Dasar bayi besar! Sini aku bantuin ya!", "Kamu tuh emang paling pinter... pinter bikin aku repot!"}, 
         {"Hahaha! Cuma aku yang boleh ngatain kamu bodoh!", "Dasar payah! Tapi kamu payah kesayangan aku.", "Sini, biar si 'bodoh' ini aku yang urus aja!"}}
    },

    // 8: BENCI
    {
        // Affinity 1-3 (Asing)
        {{"Aku benci suasana kayak gini.", "Nggak suka banget deh sama orang kayak kamu!", "Pergi sana!"}, 
         {"Jangan deket-deket deh ya.", "Ih, nyebelin banget sih kamu!", "Aku benci cara kamu ngomong."}, 
         {"Benciiii banget deh!", "Ih, kamu kok bikin aku kesel terus sih!", "Jangan harap aku maafin ya!"}},
        // Affinity 4-7 (Akrab)
        {{"Aku benci kamu kalo lagi begini nih!", "Kenapa sih kamu harus nyebelin banget?!", "Males banget liat muka kamu!"}, 
         {"Iiiih! Benciiii!", "Gak mau liat kamu pokoknya!", "Kamu bener-bener ngerusak hari ini deh!"}, 
         {"Benci tapi rindu nih! Eh, enggak deng!", "Ih kamu! Bikin aku kesel tapi pengen main bareng!", "Jangan bikin aku benci kamu beneran ya!"}},
        // Affinity 8-10 (Intim)
        {{"Aku benci karena aku nggak bisa benci kamu!", "Hiks... kenapa aku sayang sama orang kayak kamu sih!", "AKU BENCI BANGET SAMA KAMU! (Sambil meluk erat)"}, 
         {"Aku benci kalo kamu nggak ada kabar!", "Ih, benci deh kalo udah kangen begini!", "Benciiii! Kamu selalu menang dari aku deh!"}, 
         {"Tau gak? Aku benci betapa aku sangat mencintaimu!", "Biarpun aku bilang benci, jangan pergi ya pokoknya!", "Hmph! Aku benci karena kamu terlalu sempurna buat aku!"}}
    },

    // 9: BYE
    {
        // Affinity 1-3 (Asing)
        {{"Ya, dadah.", "Sampai nanti ya.", "Pergi dulu ya aku."}, 
         {"Dah! Sampai ketemu lagi ya!", "Hati-hati di jalan ya!", "Seneng deh ngobrol sama kamu!"}, 
         {"Dahhh! Jangan lupa sapa aku lagi ya!", "Bye-bye! Semoga hari kamu menyenangkan ya!", "Sampai jumpa orang baik!"}},
        // Affinity 4-7 (Akrab)
        {{"Dah! Jangan kangen ya kamu!", "Bye! Aku mau istirahat dulu nih.", "Ya udah, hati-hati ya!"}, 
         {"Dahhh! Besok kita ngobrol lagi yang seru ya!", "Hati-hati! Kabari kalo udah sampe ya!", "Bye! Jangan lupa makan ya kamu!"}, 
         {"Sampai ketemuuu! Bakal kangen banget nih aku!", "Dah! Kamu hati-hati ya di sana!", "Bye! Sayang kamu... tapi sebagai temen ya! Hehe!"}},
        // Affinity 8-10 (Intim)
        {{"Hiks, jangan pergi dulu dong kamu...", "Bye... cepet balik ya, aku tungguin nih.", "Yah, mau pergi ya? Hati-hati ya sayang!"}, 
         {"Bye favoritku! Mimpi indah ya nanti malem!", "Dahhh! Besok aku jemput ya! Eh, atau kamu yang jemput aku?", "Sampai jumpa di mimpi aku ya! Hehe!"}, 
         {"Dahhh! Aku bakal nungguin chat kamu tiap detik tau!", "Bye sayang! Muach! Eh, keceplosan deh!", "Hati-hati ya cintaku! Cepet kembali ke pelukan aku!"}}
    }
};