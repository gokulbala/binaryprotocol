//*****************************************************************************
//
//*****************************************************************************

#ifndef __BIN_PROTO_H__
#define __BIN_PROTO_H__

void show_ip(void *ipaddr, unsigned long ulCol, unsigned long ulRow);

//*****************************************************************************
//
// Application Entry Points.
//
//*****************************************************************************
void fausto_init(void);
void binary_protocol_appcall(void);
void festo_appcall(void);

//*****************************************************************************
//
// Message Format
//
//*****************************************************************************
struct binary_message
{
    unsigned char Service; 
	unsigned char Data[63];
};

//*****************************************************************************
//
// Application State Variable Definition.
//
//*****************************************************************************
struct fausto_state
{
    u8_t state; 
    u16_t count;
	struct binary_message msg;
	int packets_transmitted;
};

#endif // __BIN_PROTO_H__
