
$(document).ready(function () {
    //connect to the socket server.
    var socket = io.connect('http://' + document.domain + ':' + location.port + '/test');
    var numbers_received = [];

    //receive details from server
    socket.on('configuracion_socket', function (msg) {
        var string2 = '';
        var string1 = '';
        if (msg.cant_alarms != undefined) {

            msg.cant_alarms.forEach(function (element) {
                ;
                console.log("Received:" + element);
                string2 +=
                    '<tr>' +
                    '<th scope="row">' + element[0] + '</th>' +
                    '<td>' + element[1] + '</td>' +
                    '<td>' + element[2] + '</td>' +
                    '<td>' + element[3] + '</td>' +
                    '<td>' + element[4] + '</td>' +
                    '</tr>';
            });
        }

        string1 = '<table class="table"> <thead class="thead-dark"> <tr> <th scope="col">DEVICE</th> <th scope="col">TIPO DE TRAFICO</th> <th scope="col">TIPO DE FEC DE LINEA</th> <th scope="col">TIPO FEC DE CLIENTE</th> <th scope="col">VECINO</th> </tr> </thead> <tbody>';

        $('#tabla_configuracion').html(string1 + string2 + "</tbody></table>");
    });

});