struct idDossier_Codex_Details_Scroll : idDossier_Codex_Details
{
    // semi-hack: always presume this is true, since we only pull this widget up if the text overflowed before...
    idSWFWidget_ScrollPanel* bodyPanel; // Offset: 0x130

    idSWFWidget_Text* bodyText; // Offset: 0x138

}; // Size: 0x140
