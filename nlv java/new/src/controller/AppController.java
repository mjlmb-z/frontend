package controller;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.stage.Stage;
public class AppController {
    @Override

    public void librarybuttonOnAction(ActionEvent e){
        Stage stage =(Stage) librarybutton.getScene().getWindow();
        stage.close();
        }
    
}
