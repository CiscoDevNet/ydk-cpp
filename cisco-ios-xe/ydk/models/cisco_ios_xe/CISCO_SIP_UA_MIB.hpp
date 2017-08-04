#ifndef _CISCO_SIP_UA_MIB_
#define _CISCO_SIP_UA_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace CISCO_SIP_UA_MIB {

class Ciscosipuamibnotificationprefix : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscosipuamibnotificationprefix();
        ~Ciscosipuamibnotificationprefix();


}; // Ciscosipuamibnotificationprefix

class Ciscosipuamibnotifications : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscosipuamibnotifications();
        ~Ciscosipuamibnotifications();


}; // Ciscosipuamibnotifications

class CiscoSipUaMib : public ydk::Entity
{
    public:
        CiscoSipUaMib();
        ~CiscoSipUaMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Csipcfgbase; //type: CiscoSipUaMib::Csipcfgbase
        class Csipcfgtimer; //type: CiscoSipUaMib::Csipcfgtimer
        class Csipcfgretry; //type: CiscoSipUaMib::Csipcfgretry
        class Csipcfgpeer; //type: CiscoSipUaMib::Csipcfgpeer
        class Csipcfgaaa; //type: CiscoSipUaMib::Csipcfgaaa
        class Csipcfgvoiceservicevoip; //type: CiscoSipUaMib::Csipcfgvoiceservicevoip
        class Csipstatsinfo; //type: CiscoSipUaMib::Csipstatsinfo
        class Csipstatssuccess; //type: CiscoSipUaMib::Csipstatssuccess
        class Csipstatsredirect; //type: CiscoSipUaMib::Csipstatsredirect
        class Csipstatserrclient; //type: CiscoSipUaMib::Csipstatserrclient
        class Csipstatserrserver; //type: CiscoSipUaMib::Csipstatserrserver
        class Csipstatsglobalfail; //type: CiscoSipUaMib::Csipstatsglobalfail
        class Csipstatstraffic; //type: CiscoSipUaMib::Csipstatstraffic
        class Csipstatsretry; //type: CiscoSipUaMib::Csipstatsretry
        class Csipstatsmisc; //type: CiscoSipUaMib::Csipstatsmisc
        class Csipstatsconnection; //type: CiscoSipUaMib::Csipstatsconnection
        class Csipcfgearlymediatable; //type: CiscoSipUaMib::Csipcfgearlymediatable
        class Csipcfgbindsourceaddrtable; //type: CiscoSipUaMib::Csipcfgbindsourceaddrtable
        class Csipcfgpeertable; //type: CiscoSipUaMib::Csipcfgpeertable
        class Csipcfgstatuscausetable; //type: CiscoSipUaMib::Csipcfgstatuscausetable
        class Csipcfgcausestatustable; //type: CiscoSipUaMib::Csipcfgcausestatustable
        class Csipstatssuccessoktable; //type: CiscoSipUaMib::Csipstatssuccessoktable

        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgaaa> csipcfgaaa;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgbase> csipcfgbase;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgbindsourceaddrtable> csipcfgbindsourceaddrtable;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgcausestatustable> csipcfgcausestatustable;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgearlymediatable> csipcfgearlymediatable;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgpeer> csipcfgpeer;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgpeertable> csipcfgpeertable;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgretry> csipcfgretry;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgstatuscausetable> csipcfgstatuscausetable;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgtimer> csipcfgtimer;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgvoiceservicevoip> csipcfgvoiceservicevoip;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipstatsconnection> csipstatsconnection;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipstatserrclient> csipstatserrclient;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipstatserrserver> csipstatserrserver;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipstatsglobalfail> csipstatsglobalfail;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipstatsinfo> csipstatsinfo;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipstatsmisc> csipstatsmisc;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipstatsredirect> csipstatsredirect;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipstatsretry> csipstatsretry;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipstatssuccess> csipstatssuccess;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipstatssuccessoktable> csipstatssuccessoktable;
        std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipstatstraffic> csipstatstraffic;
        
}; // CiscoSipUaMib


class CiscoSipUaMib::Csipcfgbase : public ydk::Entity
{
    public:
        Csipcfgbase();
        ~Csipcfgbase();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipcfgversion; //type: string
        ydk::YLeaf csipcfgtransport; //type: Csipcfgtransport
        ydk::YLeaf csipcfguserlocationserveraddr; //type: string
        ydk::YLeaf csipcfgmaxforwards; //type: int32
        ydk::YLeaf csipcfgbindsrcaddrinterface; //type: int32
        ydk::YLeaf csipcfgbindsrcaddrscope; //type: Csipcfgbindsrcaddrscope
        ydk::YLeaf csipcfgdnssrvquerystringformat; //type: Csipcfgdnssrvquerystringformat
        ydk::YLeaf csipcfgredirectiondisabled; //type: boolean
        ydk::YLeaf csipcfgsymnatenabled; //type: boolean
        ydk::YLeaf csipcfgsymnatdirectionrole; //type: Csipcfgsymnatdirectionrole
        ydk::YLeaf csipcfgsuspendresumeenabled; //type: boolean
        ydk::YLeaf csipcfgoffercallhold; //type: Csipcfgoffercallhold
        ydk::YLeaf csipcfgreasonheaderoveride; //type: boolean
        ydk::YLeaf csipcfgmaximumforwards; //type: int32
        class Csipcfgtransport;
        class Csipcfgbindsrcaddrscope;
        class Csipcfgdnssrvquerystringformat;
        class Csipcfgsymnatdirectionrole;
        class Csipcfgoffercallhold;

}; // CiscoSipUaMib::Csipcfgbase


class CiscoSipUaMib::Csipcfgtimer : public ydk::Entity
{
    public:
        Csipcfgtimer();
        ~Csipcfgtimer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipcfgtimertrying; //type: int32
        ydk::YLeaf csipcfgtimerexpires; //type: int32
        ydk::YLeaf csipcfgtimerconnect; //type: int32
        ydk::YLeaf csipcfgtimerdisconnect; //type: int32
        ydk::YLeaf csipcfgtimerprack; //type: int32
        ydk::YLeaf csipcfgtimercomet; //type: int32
        ydk::YLeaf csipcfgtimerreliablersp; //type: int32
        ydk::YLeaf csipcfgtimernotify; //type: int32
        ydk::YLeaf csipcfgtimerrefer; //type: int32
        ydk::YLeaf csipcfgtimersessiontimer; //type: int32
        ydk::YLeaf csipcfgtimerhold; //type: int32
        ydk::YLeaf csipcfgtimerinfo; //type: int32
        ydk::YLeaf csipcfgtimerconnectionaging; //type: int32
        ydk::YLeaf csipcfgtimerbufferinvite; //type: int32

}; // CiscoSipUaMib::Csipcfgtimer


class CiscoSipUaMib::Csipcfgretry : public ydk::Entity
{
    public:
        Csipcfgretry();
        ~Csipcfgretry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipcfgretryinvite; //type: int32
        ydk::YLeaf csipcfgretrybye; //type: int32
        ydk::YLeaf csipcfgretrycancel; //type: int32
        ydk::YLeaf csipcfgretryregister; //type: int32
        ydk::YLeaf csipcfgretryresponse; //type: int32
        ydk::YLeaf csipcfgretryprack; //type: int32
        ydk::YLeaf csipcfgretrycomet; //type: int32
        ydk::YLeaf csipcfgretryreliablersp; //type: int32
        ydk::YLeaf csipcfgretrynotify; //type: int32
        ydk::YLeaf csipcfgretryrefer; //type: int32
        ydk::YLeaf csipcfgretryinfo; //type: int32
        ydk::YLeaf csipcfgretrysubscribe; //type: int32

}; // CiscoSipUaMib::Csipcfgretry


class CiscoSipUaMib::Csipcfgpeer : public ydk::Entity
{
    public:
        Csipcfgpeer();
        ~Csipcfgpeer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipcfgoutsessiontransport; //type: Csipcfgoutsessiontransport
        ydk::YLeaf csipcfgreliable1xxrspstr; //type: string
        ydk::YLeaf csipcfgreliable1xxrsphdr; //type: Csipcfgreliable1Xxrsphdr
        ydk::YLeaf csipcfgurltype; //type: Csipcfgurltype
        class Csipcfgoutsessiontransport;
        class Csipcfgreliable1Xxrsphdr;
        class Csipcfgurltype;

}; // CiscoSipUaMib::Csipcfgpeer


class CiscoSipUaMib::Csipcfgaaa : public ydk::Entity
{
    public:
        Csipcfgaaa();
        ~Csipcfgaaa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipcfgaaausername; //type: Csipcfgaaausername
        class Csipcfgaaausername;

}; // CiscoSipUaMib::Csipcfgaaa


class CiscoSipUaMib::Csipcfgvoiceservicevoip : public ydk::Entity
{
    public:
        Csipcfgvoiceservicevoip();
        ~Csipcfgvoiceservicevoip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipcfgheaderpassingenabled; //type: boolean
        ydk::YLeaf csipcfgmaxsubscriptionaccept; //type: uint32
        ydk::YLeaf csipcfgmaxsubscriptionoriginate; //type: uint32
        ydk::YLeaf csipcfgswitchtransportenabled; //type: boolean

}; // CiscoSipUaMib::Csipcfgvoiceservicevoip


class CiscoSipUaMib::Csipstatsinfo : public ydk::Entity
{
    public:
        Csipstatsinfo();
        ~Csipstatsinfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipstatsinfotryingins; //type: uint32
        ydk::YLeaf csipstatsinfotryingouts; //type: uint32
        ydk::YLeaf csipstatsinforingingins; //type: uint32
        ydk::YLeaf csipstatsinforingingouts; //type: uint32
        ydk::YLeaf csipstatsinfoforwardedins; //type: uint32
        ydk::YLeaf csipstatsinfoforwardedouts; //type: uint32
        ydk::YLeaf csipstatsinfoqueuedins; //type: uint32
        ydk::YLeaf csipstatsinfoqueuedouts; //type: uint32
        ydk::YLeaf csipstatsinfosessionprogins; //type: uint32
        ydk::YLeaf csipstatsinfosessionprogouts; //type: uint32

}; // CiscoSipUaMib::Csipstatsinfo


class CiscoSipUaMib::Csipstatssuccess : public ydk::Entity
{
    public:
        Csipstatssuccess();
        ~Csipstatssuccess();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipstatssuccessokins; //type: uint32
        ydk::YLeaf csipstatssuccessokouts; //type: uint32
        ydk::YLeaf csipstatssuccessacceptedins; //type: uint32
        ydk::YLeaf csipstatssuccessacceptedouts; //type: uint32

}; // CiscoSipUaMib::Csipstatssuccess


class CiscoSipUaMib::Csipstatsredirect : public ydk::Entity
{
    public:
        Csipstatsredirect();
        ~Csipstatsredirect();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipstatsredirmultiplechoices; //type: uint32
        ydk::YLeaf csipstatsredirmovedperms; //type: uint32
        ydk::YLeaf csipstatsredirmovedtemps; //type: uint32
        ydk::YLeaf csipstatsredirseeothers; //type: uint32
        ydk::YLeaf csipstatsrediruseproxys; //type: uint32
        ydk::YLeaf csipstatsrediraltservices; //type: uint32
        ydk::YLeaf csipstatsredirmovedtempsins; //type: uint32
        ydk::YLeaf csipstatsredirmovedtempsouts; //type: uint32

}; // CiscoSipUaMib::Csipstatsredirect


class CiscoSipUaMib::Csipstatserrclient : public ydk::Entity
{
    public:
        Csipstatserrclient();
        ~Csipstatserrclient();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipstatsclientbadrequestins; //type: uint32
        ydk::YLeaf csipstatsclientbadrequestouts; //type: uint32
        ydk::YLeaf csipstatsclientunauthorizedins; //type: uint32
        ydk::YLeaf csipstatsclientunauthorizedouts; //type: uint32
        ydk::YLeaf csipstatsclientpaymentreqdins; //type: uint32
        ydk::YLeaf csipstatsclientpaymentreqdouts; //type: uint32
        ydk::YLeaf csipstatsclientforbiddenins; //type: uint32
        ydk::YLeaf csipstatsclientforbiddenouts; //type: uint32
        ydk::YLeaf csipstatsclientnotfoundins; //type: uint32
        ydk::YLeaf csipstatsclientnotfoundouts; //type: uint32
        ydk::YLeaf csipstatsclientmethnotallowedins; //type: uint32
        ydk::YLeaf csipstatsclientmethnotallowedouts; //type: uint32
        ydk::YLeaf csipstatsclientnotacceptableins; //type: uint32
        ydk::YLeaf csipstatsclientnotacceptableouts; //type: uint32
        ydk::YLeaf csipstatsclientproxyauthreqdins; //type: uint32
        ydk::YLeaf csipstatsclientproxyauthreqdouts; //type: uint32
        ydk::YLeaf csipstatsclientreqtimeoutins; //type: uint32
        ydk::YLeaf csipstatsclientreqtimeoutouts; //type: uint32
        ydk::YLeaf csipstatsclientconflictins; //type: uint32
        ydk::YLeaf csipstatsclientconflictouts; //type: uint32
        ydk::YLeaf csipstatsclientgoneins; //type: uint32
        ydk::YLeaf csipstatsclientgoneouts; //type: uint32
        ydk::YLeaf csipstatsclientlengthrequiredins; //type: uint32
        ydk::YLeaf csipstatsclientlengthrequiredouts; //type: uint32
        ydk::YLeaf csipstatsclientreqenttoolargeins; //type: uint32
        ydk::YLeaf csipstatsclientreqenttoolargeouts; //type: uint32
        ydk::YLeaf csipstatsclientrequritoolargeins; //type: uint32
        ydk::YLeaf csipstatsclientrequritoolargeouts; //type: uint32
        ydk::YLeaf csipstatsclientnosupmediatypeins; //type: uint32
        ydk::YLeaf csipstatsclientnosupmediatypeouts; //type: uint32
        ydk::YLeaf csipstatsclientbadextensionins; //type: uint32
        ydk::YLeaf csipstatsclientbadextensionouts; //type: uint32
        ydk::YLeaf csipstatsclienttempnotavailins; //type: uint32
        ydk::YLeaf csipstatsclienttempnotavailouts; //type: uint32
        ydk::YLeaf csipstatsclientcalllegnoexistins; //type: uint32
        ydk::YLeaf csipstatsclientcalllegnoexistouts; //type: uint32
        ydk::YLeaf csipstatsclientloopdetectedins; //type: uint32
        ydk::YLeaf csipstatsclientloopdetectedouts; //type: uint32
        ydk::YLeaf csipstatsclienttoomanyhopsins; //type: uint32
        ydk::YLeaf csipstatsclienttoomanyhopsouts; //type: uint32
        ydk::YLeaf csipstatsclientaddrincompleteins; //type: uint32
        ydk::YLeaf csipstatsclientaddrincompleteouts; //type: uint32
        ydk::YLeaf csipstatsclientambiguousins; //type: uint32
        ydk::YLeaf csipstatsclientambiguousouts; //type: uint32
        ydk::YLeaf csipstatsclientbusyhereins; //type: uint32
        ydk::YLeaf csipstatsclientbusyhereouts; //type: uint32
        ydk::YLeaf csipstatsclientreqtermins; //type: uint32
        ydk::YLeaf csipstatsclientreqtermouts; //type: uint32
        ydk::YLeaf csipstatsclientnoaccepthereins; //type: uint32
        ydk::YLeaf csipstatsclientnoaccepthereouts; //type: uint32
        ydk::YLeaf csipstatsclientbadeventins; //type: uint32
        ydk::YLeaf csipstatsclientbadeventouts; //type: uint32
        ydk::YLeaf csipstatsclientsttoosmallins; //type: uint32
        ydk::YLeaf csipstatsclientsttoosmallouts; //type: uint32
        ydk::YLeaf csipstatsclientreqpendingins; //type: uint32
        ydk::YLeaf csipstatsclientreqpendingouts; //type: uint32

}; // CiscoSipUaMib::Csipstatserrclient


class CiscoSipUaMib::Csipstatserrserver : public ydk::Entity
{
    public:
        Csipstatserrserver();
        ~Csipstatserrserver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipstatsserverinterrorins; //type: uint32
        ydk::YLeaf csipstatsserverinterrorouts; //type: uint32
        ydk::YLeaf csipstatsservernotimplementedins; //type: uint32
        ydk::YLeaf csipstatsservernotimplementedouts; //type: uint32
        ydk::YLeaf csipstatsserverbadgatewayins; //type: uint32
        ydk::YLeaf csipstatsserverbadgatewayouts; //type: uint32
        ydk::YLeaf csipstatsserverserviceunavailins; //type: uint32
        ydk::YLeaf csipstatsserverserviceunavailouts; //type: uint32
        ydk::YLeaf csipstatsservergatewaytimeoutins; //type: uint32
        ydk::YLeaf csipstatsservergatewaytimeoutouts; //type: uint32
        ydk::YLeaf csipstatsserverbadsipversionins; //type: uint32
        ydk::YLeaf csipstatsserverbadsipversionouts; //type: uint32
        ydk::YLeaf csipstatsserverprecondfailureins; //type: uint32
        ydk::YLeaf csipstatsserverprecondfailureouts; //type: uint32

}; // CiscoSipUaMib::Csipstatserrserver


class CiscoSipUaMib::Csipstatsglobalfail : public ydk::Entity
{
    public:
        Csipstatsglobalfail();
        ~Csipstatsglobalfail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipstatsglobalbusyeverywhereins; //type: uint32
        ydk::YLeaf csipstatsglobalbusyeverywhereouts; //type: uint32
        ydk::YLeaf csipstatsglobaldeclineins; //type: uint32
        ydk::YLeaf csipstatsglobaldeclineouts; //type: uint32
        ydk::YLeaf csipstatsglobalnotanywhereins; //type: uint32
        ydk::YLeaf csipstatsglobalnotanywhereouts; //type: uint32
        ydk::YLeaf csipstatsglobalnotacceptableins; //type: uint32
        ydk::YLeaf csipstatsglobalnotacceptableouts; //type: uint32

}; // CiscoSipUaMib::Csipstatsglobalfail


class CiscoSipUaMib::Csipstatstraffic : public ydk::Entity
{
    public:
        Csipstatstraffic();
        ~Csipstatstraffic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipstatstrafficinviteins; //type: uint32
        ydk::YLeaf csipstatstrafficinviteouts; //type: uint32
        ydk::YLeaf csipstatstrafficackins; //type: uint32
        ydk::YLeaf csipstatstrafficackouts; //type: uint32
        ydk::YLeaf csipstatstrafficbyeins; //type: uint32
        ydk::YLeaf csipstatstrafficbyeouts; //type: uint32
        ydk::YLeaf csipstatstrafficcancelins; //type: uint32
        ydk::YLeaf csipstatstrafficcancelouts; //type: uint32
        ydk::YLeaf csipstatstrafficoptionsins; //type: uint32
        ydk::YLeaf csipstatstrafficoptionsouts; //type: uint32
        ydk::YLeaf csipstatstrafficregisterins; //type: uint32
        ydk::YLeaf csipstatstrafficregisterouts; //type: uint32
        ydk::YLeaf csipstatstrafficcometins; //type: uint32
        ydk::YLeaf csipstatstrafficcometouts; //type: uint32
        ydk::YLeaf csipstatstrafficprackins; //type: uint32
        ydk::YLeaf csipstatstrafficprackouts; //type: uint32
        ydk::YLeaf csipstatstrafficreferins; //type: uint32
        ydk::YLeaf csipstatstrafficreferouts; //type: uint32
        ydk::YLeaf csipstatstrafficnotifyins; //type: uint32
        ydk::YLeaf csipstatstrafficnotifyouts; //type: uint32
        ydk::YLeaf csipstatstrafficinfoins; //type: uint32
        ydk::YLeaf csipstatstrafficinfoouts; //type: uint32
        ydk::YLeaf csipstatstrafficsubscribeins; //type: uint32
        ydk::YLeaf csipstatstrafficsubscribeouts; //type: uint32
        ydk::YLeaf csipstatstrafficupdateins; //type: uint32
        ydk::YLeaf csipstatstrafficupdateouts; //type: uint32

}; // CiscoSipUaMib::Csipstatstraffic


class CiscoSipUaMib::Csipstatsretry : public ydk::Entity
{
    public:
        Csipstatsretry();
        ~Csipstatsretry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipstatsretryinvites; //type: uint32
        ydk::YLeaf csipstatsretrybyes; //type: uint32
        ydk::YLeaf csipstatsretrycancels; //type: uint32
        ydk::YLeaf csipstatsretryregisters; //type: uint32
        ydk::YLeaf csipstatsretryresponses; //type: uint32
        ydk::YLeaf csipstatsretrypracks; //type: uint32
        ydk::YLeaf csipstatsretrycomets; //type: uint32
        ydk::YLeaf csipstatsretryreliable1xxrsps; //type: uint32
        ydk::YLeaf csipstatsretrynotifys; //type: uint32
        ydk::YLeaf csipstatsretryrefers; //type: uint32
        ydk::YLeaf csipstatsretryinfo; //type: uint32
        ydk::YLeaf csipstatsretrysubscribe; //type: uint32

}; // CiscoSipUaMib::Csipstatsretry


class CiscoSipUaMib::Csipstatsmisc : public ydk::Entity
{
    public:
        Csipstatsmisc();
        ~Csipstatsmisc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipstatsmisc3xxmappedto4xxrsps; //type: uint32

}; // CiscoSipUaMib::Csipstatsmisc


class CiscoSipUaMib::Csipstatsconnection : public ydk::Entity
{
    public:
        Csipstatsconnection();
        ~Csipstatsconnection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipstatsconntcpsendfailures; //type: uint32
        ydk::YLeaf csipstatsconnudpsendfailures; //type: uint32
        ydk::YLeaf csipstatsconntcpremoteclosures; //type: uint32
        ydk::YLeaf csipstatsconnudpcreatefailures; //type: uint32
        ydk::YLeaf csipstatsconntcpcreatefailures; //type: uint32
        ydk::YLeaf csipstatsconnudpinactivetimeouts; //type: uint32
        ydk::YLeaf csipstatsconntcpinactivetimeouts; //type: uint32
        ydk::YLeaf csipstatsactiveudpconnections; //type: uint32
        ydk::YLeaf csipstatsactivetcpconnections; //type: uint32

}; // CiscoSipUaMib::Csipstatsconnection


class CiscoSipUaMib::Csipcfgearlymediatable : public ydk::Entity
{
    public:
        Csipcfgearlymediatable();
        ~Csipcfgearlymediatable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csipcfgearlymediaentry; //type: CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry

        std::vector<std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry> > csipcfgearlymediaentry;
        
}; // CiscoSipUaMib::Csipcfgearlymediatable


class CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry : public ydk::Entity
{
    public:
        Csipcfgearlymediaentry();
        ~Csipcfgearlymediaentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipcfgearlymediastatuscodeindex; //type: int32
        ydk::YLeaf csipcfgearlymediacutthrudisabled; //type: boolean

}; // CiscoSipUaMib::Csipcfgearlymediatable::Csipcfgearlymediaentry


class CiscoSipUaMib::Csipcfgbindsourceaddrtable : public ydk::Entity
{
    public:
        Csipcfgbindsourceaddrtable();
        ~Csipcfgbindsourceaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csipcfgbindsourceaddrentry; //type: CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry

        std::vector<std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry> > csipcfgbindsourceaddrentry;
        
}; // CiscoSipUaMib::Csipcfgbindsourceaddrtable


class CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry : public ydk::Entity
{
    public:
        Csipcfgbindsourceaddrentry();
        ~Csipcfgbindsourceaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipcfgbindsourceaddrscope; //type: Csipcfgbindsourceaddrscope
        ydk::YLeaf csipcfgbindsourceaddrinterface; //type: int32
        class Csipcfgbindsourceaddrscope;

}; // CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry


class CiscoSipUaMib::Csipcfgpeertable : public ydk::Entity
{
    public:
        Csipcfgpeertable();
        ~Csipcfgpeertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csipcfgpeerentry; //type: CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry

        std::vector<std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry> > csipcfgpeerentry;
        
}; // CiscoSipUaMib::Csipcfgpeertable


class CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry : public ydk::Entity
{
    public:
        Csipcfgpeerentry();
        ~Csipcfgpeerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipcfgpeerindex; //type: int32
        ydk::YLeaf csipcfgpeeroutsessiontransport; //type: Csipcfgpeeroutsessiontransport
        ydk::YLeaf csipcfgpeerreliable1xxrspstr; //type: string
        ydk::YLeaf csipcfgpeerreliable1xxrsphdr; //type: Csipcfgpeerreliable1Xxrsphdr
        ydk::YLeaf csipcfgpeerurltype; //type: Csipcfgpeerurltype
        ydk::YLeaf csipcfgpeerswitchtransenabled; //type: boolean
        class Csipcfgpeeroutsessiontransport;
        class Csipcfgpeerreliable1Xxrsphdr;
        class Csipcfgpeerurltype;

}; // CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry


class CiscoSipUaMib::Csipcfgstatuscausetable : public ydk::Entity
{
    public:
        Csipcfgstatuscausetable();
        ~Csipcfgstatuscausetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csipcfgstatuscauseentry; //type: CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry

        std::vector<std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry> > csipcfgstatuscauseentry;
        
}; // CiscoSipUaMib::Csipcfgstatuscausetable


class CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry : public ydk::Entity
{
    public:
        Csipcfgstatuscauseentry();
        ~Csipcfgstatuscauseentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipcfgstatuscodeindex; //type: int32
        ydk::YLeaf csipcfgpstncause; //type: int32
        ydk::YLeaf csipcfgstatuscausestorestatus; //type: Storagetype

}; // CiscoSipUaMib::Csipcfgstatuscausetable::Csipcfgstatuscauseentry


class CiscoSipUaMib::Csipcfgcausestatustable : public ydk::Entity
{
    public:
        Csipcfgcausestatustable();
        ~Csipcfgcausestatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csipcfgcausestatusentry; //type: CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry

        std::vector<std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry> > csipcfgcausestatusentry;
        
}; // CiscoSipUaMib::Csipcfgcausestatustable


class CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry : public ydk::Entity
{
    public:
        Csipcfgcausestatusentry();
        ~Csipcfgcausestatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipcfgpstncauseindex; //type: int32
        ydk::YLeaf csipcfgstatuscode; //type: int32
        ydk::YLeaf csipcfgcausestatusstorestatus; //type: Storagetype

}; // CiscoSipUaMib::Csipcfgcausestatustable::Csipcfgcausestatusentry


class CiscoSipUaMib::Csipstatssuccessoktable : public ydk::Entity
{
    public:
        Csipstatssuccessoktable();
        ~Csipstatssuccessoktable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Csipstatssuccessokentry; //type: CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry

        std::vector<std::shared_ptr<CISCO_SIP_UA_MIB::CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry> > csipstatssuccessokentry;
        
}; // CiscoSipUaMib::Csipstatssuccessoktable


class CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry : public ydk::Entity
{
    public:
        Csipstatssuccessokentry();
        ~Csipstatssuccessokentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csipstatssuccessokmethod; //type: binary
        ydk::YLeaf csipstatssuccessokinbounds; //type: uint32
        ydk::YLeaf csipstatssuccessokoutbounds; //type: uint32

}; // CiscoSipUaMib::Csipstatssuccessoktable::Csipstatssuccessokentry

class CiscoSipUaMib::Csipcfgbase::Csipcfgtransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udpAndTcp;
        static const ydk::Enum::YLeaf disabled;

};

class CiscoSipUaMib::Csipcfgbase::Csipcfgbindsrcaddrscope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf control;

};

class CiscoSipUaMib::Csipcfgbase::Csipcfgdnssrvquerystringformat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v1;
        static const ydk::Enum::YLeaf v2;

};

class CiscoSipUaMib::Csipcfgbase::Csipcfgsymnatdirectionrole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf active;

};

class CiscoSipUaMib::Csipcfgbase::Csipcfgoffercallhold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf directionAttr;
        static const ydk::Enum::YLeaf connAddr;

};

class CiscoSipUaMib::Csipcfgpeer::Csipcfgoutsessiontransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf tcp;

};

class CiscoSipUaMib::Csipcfgpeer::Csipcfgreliable1Xxrsphdr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf supported;
        static const ydk::Enum::YLeaf require;
        static const ydk::Enum::YLeaf disabled;

};

class CiscoSipUaMib::Csipcfgpeer::Csipcfgurltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sip;
        static const ydk::Enum::YLeaf tel;

};

class CiscoSipUaMib::Csipcfgaaa::Csipcfgaaausername : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf callingNumber;
        static const ydk::Enum::YLeaf proxyAuth;

};

class CiscoSipUaMib::Csipcfgbindsourceaddrtable::Csipcfgbindsourceaddrentry::Csipcfgbindsourceaddrscope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf media;
        static const ydk::Enum::YLeaf control;

};

class CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeeroutsessiontransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf tcp;

};

class CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerreliable1Xxrsphdr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf supported;
        static const ydk::Enum::YLeaf require;
        static const ydk::Enum::YLeaf disabled;

};

class CiscoSipUaMib::Csipcfgpeertable::Csipcfgpeerentry::Csipcfgpeerurltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf sip;
        static const ydk::Enum::YLeaf tel;

};


}
}

#endif /* _CISCO_SIP_UA_MIB_ */

