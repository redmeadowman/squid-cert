/*
 * Copyright (C) 1996-2016 The Squid Software Foundation and contributors
 *
 * Squid software is distributed under GPLv2+ license and includes
 * contributions from numerous individuals and organizations.
 * Please see the COPYING and CONTRIBUTORS files for details.
 */

#include "squid.h"
#include "comm/Connection.h"

#define STUB_API "security/libsecurity.la"
#include "tests/STUB.h"

#include "security/EncryptorAnswer.h"
Security::EncryptorAnswer::~EncryptorAnswer() {}
std::ostream &Security::operator <<(std::ostream &os, const Security::EncryptorAnswer &) STUB_RETVAL(os)

#include "security/PeerOptions.h"
Security::PeerOptions Security::ProxyOutgoingConfig;
void Security::PeerOptions::parse(char const*) STUB
Security::ContextPtr Security::PeerOptions::createClientContext(bool) STUB_RETVAL(NULL)
void Security::PeerOptions::updateTlsVersionLimits() STUB
Security::ContextPtr Security::PeerOptions::createBlankContext() const STUB
void Security::PeerOptions::updateContextCa(Security::ContextPtr &) STUB
void Security::PeerOptions::updateContextCrl(Security::ContextPtr &) STUB
void Security::PeerOptions::dumpCfg(Packable*, char const*) const STUB
long Security::PeerOptions::parseOptions() STUB_RETVAL(0)
long Security::PeerOptions::parseFlags() STUB_RETVAL(0)
void parse_securePeerOptions(Security::PeerOptions *) STUB

#include "security/ServerOptions.h"
//Security::ServerOptions::ServerOptions(const Security::ServerOptions &) STUB
void Security::ServerOptions::parse(const char *) STUB
void Security::ServerOptions::dumpCfg(Packable *, const char *) const STUB
Security::ContextPtr Security::ServerOptions::createBlankContext() const STUB
Security::ContextPtr Security::ServerOptions::createStaticServerContext(AnyP::PortCfg &) STUB_RETVAL(nullptr)
void Security::ServerOptions::updateContextEecdh(Security::ContextPtr &) STUB

#include "security/NegotiationHistory.h"
Security::NegotiationHistory::NegotiationHistory() STUB
void Security::NegotiationHistory::retrieveNegotiatedInfo(Security::SessionPtr) STUB
void Security::NegotiationHistory::retrieveParsedInfo(Security::TlsDetails::Pointer const &) STUB
const char *Security::NegotiationHistory::cipherName() const STUB
const char *Security::NegotiationHistory::printTlsVersion(AnyP::ProtocolVersion const &v) const STUB

#include "security/Handshake.h"
Security::HandshakeParser::HandshakeParser() STUB
bool Security::HandshakeParser::parseHello(const SBuf &) STUB_RETVAL(false)

#include "security/Session.h"
namespace Security {
bool SessionIsResumed(const Security::SessionPointer &) STUB_RETVAL(false)
void GetSessionResumeData(const Security::SessionPointer &, Security::SessionStatePointer &) STUB
void SetSessionResumeData(const Security::SessionPtr &, const Security::SessionStatePointer &) STUB
} // namespace Security
