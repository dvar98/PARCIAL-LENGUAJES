import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;

import java.io.FileInputStream;
import java.io.IOException;

public class Calc {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.err.println("Usage: java Calc <inputfile>");
            return;
        }

        try {
            // Leer el archivo de entrada
            CharStream input = CharStreams.fromStream(new FileInputStream(args[0]));

            // Crear el lexer y parser
            TrigCalculatorLexer lexer = new TrigCalculatorLexer(input);
            CommonTokenStream tokens = new CommonTokenStream(lexer);
            TrigCalculatorParser parser = new TrigCalculatorParser(tokens);

            // Parsear el archivo
            ParseTree tree = parser.inicio();

            // Crear el visitor y evaluar el árbol
            TrigCalculatorVisitorImpl visitor = new TrigCalculatorVisitorImpl();
            visitor.visit(tree);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
