
/*import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;*/
 
/*public class App extends Application {
    public static void main(String[] args) {
        launch(args);
    }
    
    @Override 
    public void start(Stage primaryStage) {
        primaryStage.setTitle("Hello World!");
        Button btn = new Button();
        btn.setText("Say 'Hello World'");
        btn.setOnAction(new EventHandler<ActionEvent>() {
 
            @Override
            public void handle(ActionEvent event) {
                System.out.println("Hello World!");
            }
        });
        
        StackPane root = new StackPane();
        root.getChildren().add(btn);
        primaryStage.setScene(new Scene(root, 300, 250));
        primaryStage.show();
    }
}*/


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
public class App implements Initializable{

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
    public void playmedia(){
        mediaPlayer.play();

    }

    public void pausemedia(){

    }
}