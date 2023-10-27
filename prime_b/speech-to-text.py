# Import the SpeechRecognition library
import speech_recognition as sr

# Initialize the recognizer
recognizer = sr.Recognizer()

# Capture audio from a microphone
with sr.Microphone() as source:
    print("Please speak something...")
    recognizer.adjust_for_ambient_noise(source)  # Adjust for ambient noise
    audio = recognizer.listen(source, timeout=5)  # Listen for audio input for up to 5 seconds

print("Audio captured successfully!")

# Try to recognize the speech using Google Web Speech API
try:
    recognized_text = recognizer.recognize_google(audio)
    print("You said: " + recognized_text)
except sr.UnknownValueError:
    print("Google Web Speech API could not understand the audio")
except sr.RequestError as e:
    print(f"Could not request results from Google Web Speech API; {e}")
