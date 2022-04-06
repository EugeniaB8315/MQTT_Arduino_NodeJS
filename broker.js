const mosca = require('mosca')

const broker = new mosca.Server({
    port:9000

})

broker.on('ready', () =>{
    console.log('mosca broker is ready')
})
broker.on('clinetConnected', (client)=>{

    console.log('New client' + client.id)
})

broker.on('published',(packet)=>{
    console.log(packet.payload.toString())
})