import webbrowser
webbrowser.register('chrome', None,webbrowser.BackgroundBrowser("C:\Program Files\Google\Chrome\Application\chrome.exe"))
test = webbrowser.get('chrome')
facebook = "www.facebook.com"
youtube = "www.youtube.com"

def chrome(website):
    test.open(website)
