/* Generated from Custom.Opc.Ua.Transport.bsd with script C:/SPB_Data/open62541/tools/generate_datatypes.py
 * on host Pavan by user Pavan-Kumar at 2020-10-03 09:49:18 */

#include "transport_generated.h"

/* TcpMessageHeader */
static UA_DataTypeMember TcpMessageHeader_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageTypeAndChunkType") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpMessageHeader, messageSize) - offsetof(UA_TcpMessageHeader, messageTypeAndChunkType) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageSize") /* .memberName */
},};

/* MessageType */
#define MessageType_members NULL

/* TcpHelloMessage */
static UA_DataTypeMember TcpHelloMessage_members[6] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProtocolVersion") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpHelloMessage, receiveBufferSize) - offsetof(UA_TcpHelloMessage, protocolVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReceiveBufferSize") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpHelloMessage, sendBufferSize) - offsetof(UA_TcpHelloMessage, receiveBufferSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SendBufferSize") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpHelloMessage, maxMessageSize) - offsetof(UA_TcpHelloMessage, sendBufferSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxMessageSize") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpHelloMessage, maxChunkCount) - offsetof(UA_TcpHelloMessage, maxMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxChunkCount") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_TcpHelloMessage, endpointUrl) - offsetof(UA_TcpHelloMessage, maxChunkCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndpointUrl") /* .memberName */
},};

/* SymmetricAlgorithmSecurityHeader */
static UA_DataTypeMember SymmetricAlgorithmSecurityHeader_members[1] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TokenId") /* .memberName */
},};

/* SequenceHeader */
static UA_DataTypeMember SequenceHeader_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SequenceNumber") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SequenceHeader, requestId) - offsetof(UA_SequenceHeader, sequenceNumber) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RequestId") /* .memberName */
},};

/* TcpErrorMessage */
static UA_DataTypeMember TcpErrorMessage_members[2] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Error") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_TcpErrorMessage, reason) - offsetof(UA_TcpErrorMessage, error) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Reason") /* .memberName */
},};

/* AsymmetricAlgorithmSecurityHeader */
static UA_DataTypeMember AsymmetricAlgorithmSecurityHeader_members[3] = {
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SecurityPolicyUri") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_AsymmetricAlgorithmSecurityHeader, senderCertificate) - offsetof(UA_AsymmetricAlgorithmSecurityHeader, securityPolicyUri) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SenderCertificate") /* .memberName */
},
{
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_AsymmetricAlgorithmSecurityHeader, receiverCertificateThumbprint) - offsetof(UA_AsymmetricAlgorithmSecurityHeader, senderCertificate) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReceiverCertificateThumbprint") /* .memberName */
},};

/* TcpAcknowledgeMessage */
static UA_DataTypeMember TcpAcknowledgeMessage_members[5] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProtocolVersion") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpAcknowledgeMessage, receiveBufferSize) - offsetof(UA_TcpAcknowledgeMessage, protocolVersion) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReceiveBufferSize") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpAcknowledgeMessage, sendBufferSize) - offsetof(UA_TcpAcknowledgeMessage, receiveBufferSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SendBufferSize") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpAcknowledgeMessage, maxMessageSize) - offsetof(UA_TcpAcknowledgeMessage, sendBufferSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxMessageSize") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_TcpAcknowledgeMessage, maxChunkCount) - offsetof(UA_TcpAcknowledgeMessage, maxMessageSize) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxChunkCount") /* .memberName */
},};

/* ChunkType */
#define ChunkType_members NULL
const UA_DataType UA_TRANSPORT[UA_TRANSPORT_COUNT] = {
/* TcpMessageHeader */
{
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_TcpMessageHeader), /* .memSize */
    UA_TRANSPORT_TCPMESSAGEHEADER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    TcpMessageHeader_members  /* .members */
    UA_TYPENAME("TcpMessageHeader") /* .typeName */
},
/* MessageType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_MessageType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    MessageType_members  /* .members */
    UA_TYPENAME("MessageType") /* .typeName */
},
/* TcpHelloMessage */
{
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_TcpHelloMessage), /* .memSize */
    UA_TRANSPORT_TCPHELLOMESSAGE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    TcpHelloMessage_members  /* .members */
    UA_TYPENAME("TcpHelloMessage") /* .typeName */
},
/* SymmetricAlgorithmSecurityHeader */
{
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_SymmetricAlgorithmSecurityHeader), /* .memSize */
    UA_TRANSPORT_SYMMETRICALGORITHMSECURITYHEADER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    SymmetricAlgorithmSecurityHeader_members  /* .members */
    UA_TYPENAME("SymmetricAlgorithmSecurityHeader") /* .typeName */
},
/* SequenceHeader */
{
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_SequenceHeader), /* .memSize */
    UA_TRANSPORT_SEQUENCEHEADER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SequenceHeader_members  /* .members */
    UA_TYPENAME("SequenceHeader") /* .typeName */
},
/* TcpErrorMessage */
{
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_TcpErrorMessage), /* .memSize */
    UA_TRANSPORT_TCPERRORMESSAGE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    TcpErrorMessage_members  /* .members */
    UA_TYPENAME("TcpErrorMessage") /* .typeName */
},
/* AsymmetricAlgorithmSecurityHeader */
{
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_AsymmetricAlgorithmSecurityHeader), /* .memSize */
    UA_TRANSPORT_ASYMMETRICALGORITHMSECURITYHEADER, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    AsymmetricAlgorithmSecurityHeader_members  /* .members */
    UA_TYPENAME("AsymmetricAlgorithmSecurityHeader") /* .typeName */
},
/* TcpAcknowledgeMessage */
{
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_TcpAcknowledgeMessage), /* .memSize */
    UA_TRANSPORT_TCPACKNOWLEDGEMESSAGE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    TcpAcknowledgeMessage_members  /* .members */
    UA_TYPENAME("TcpAcknowledgeMessage") /* .typeName */
},
/* ChunkType */
{
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ChunkType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    ChunkType_members  /* .members */
    UA_TYPENAME("ChunkType") /* .typeName */
},
};

