

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;
public class AppController {
    @Override

    public void librarybuttonOnClick(){
        Stage stage =(Stage) librarybutton.getScene().getWindow();
        stage.close();
        }
}
