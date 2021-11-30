
import java.io.File;
import java.net.URL;
import java.util.ArrayList;
import java.util.ResourceBundle;
//import java.util.Timer;
//import java.util.TimerTask;
//import javafx.application.Application;
//import javafx.fxml.FXMLLoader;
//import javafx.event.ActionEvent;
//import javafx.event.EventHandler;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.ProgressBar;
import javafx.scene.control.Slider;
import javafx.scene.layout.Pane;
//import javafx.scene.layout.StackPane;
import javafx.scene.media.Media;
import javafx.scene.media.MediaPlayer;
import javafx.util.Duration;
public class AppController implements Initializable{

    public static void main(String[] args){
        //
    }

    @FXML
    private Pane pane;
    @FXML
    private Label songLabel;
    @FXML
    private Button playButton, pauseButton, nextButton, prevButton;
    @FXML
    private Slider volumeSlider;
    @FXML
    private ProgressBar songProgressBar;
    private Media media;
    private MediaPlayer mediaPlayer;
    

    private File directory;
    private File[] files;

    private ArrayList<File> songs;
    private int songNumber;
    //private Timer timer;
    //private TimerTask task;
    //private boolean running;

    @Override
    public void initialize(URL location, ResourceBundle resources) {
        songs= new ArrayList<File>();
        directory= new File("music");
        files = directory.listFiles();

        if(files!= null){
            for(File file: files){
                songs.add(file);
                System.out.println(file);
            }
        }
        media = new Media(songs.get(songNumber).toURI().toString());
        mediaPlayer= new MediaPlayer(media);

        songLabel.setText(songs.get(songNumber).getName());
        
    }
    public void playButton(){
        
        mediaPlayer.play();

    }

    public void pausemedia(){
        mediaPlayer.pause();

    }

    public void resetmedia(){
        mediaPlayer.seek(Duration.seconds(0));

    }

    public void nextmedia(){
        if(songNumber < songs.size() - 1){
            songNumber++;
            mediaPlayer.stop();

            media = new Media(songs.get(songNumber).toURI().toString());
            mediaPlayer= new MediaPlayer(media);

            songLabel.setText(songs.get(songNumber).getName());
            playButton();
        }
        else{
            songNumber=0;
            mediaPlayer.stop();

            media = new Media(songs.get(songNumber).toURI().toString());
            mediaPlayer= new MediaPlayer(media);

            songLabel.setText(songs.get(songNumber).getName());

        }
    }
}