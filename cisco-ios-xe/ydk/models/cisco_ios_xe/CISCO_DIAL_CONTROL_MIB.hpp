#ifndef _CISCO_DIAL_CONTROL_MIB_
#define _CISCO_DIAL_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_DIAL_CONTROL_MIB {

class CiscoDialControlMib : public ydk::Entity
{
    public:
        CiscoDialControlMib();
        ~CiscoDialControlMib();

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

        class Cpeerglobalconfiguration; //type: CiscoDialControlMib::Cpeerglobalconfiguration
        class Ccallhistorytable; //type: CiscoDialControlMib::Ccallhistorytable
        class Ccallhistoryiectable; //type: CiscoDialControlMib::Ccallhistoryiectable

        std::shared_ptr<CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistoryiectable> ccallhistoryiectable;
        std::shared_ptr<CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistorytable> ccallhistorytable;
        std::shared_ptr<CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Cpeerglobalconfiguration> cpeerglobalconfiguration;
        
}; // CiscoDialControlMib


class CiscoDialControlMib::Cpeerglobalconfiguration : public ydk::Entity
{
    public:
        Cpeerglobalconfiguration();
        ~Cpeerglobalconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpeersearchtype; //type: Cpeersearchtype
        class Cpeersearchtype;

}; // CiscoDialControlMib::Cpeerglobalconfiguration


class CiscoDialControlMib::Ccallhistorytable : public ydk::Entity
{
    public:
        Ccallhistorytable();
        ~Ccallhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ccallhistoryentry; //type: CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry

        std::vector<std::shared_ptr<CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry> > ccallhistoryentry;
        
}; // CiscoDialControlMib::Ccallhistorytable


class CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry : public ydk::Entity
{
    public:
        Ccallhistoryentry();
        ~Ccallhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccallhistoryindex; //type: uint32
        ydk::YLeaf ccallhistorysetuptime; //type: uint32
        ydk::YLeaf ccallhistorypeeraddress; //type: string
        ydk::YLeaf ccallhistorypeersubaddress; //type: string
        ydk::YLeaf ccallhistorypeerid; //type: int32
        ydk::YLeaf ccallhistorypeerifindex; //type: int32
        ydk::YLeaf ccallhistorylogicalifindex; //type: int32
        ydk::YLeaf ccallhistorydisconnectcause; //type: binary
        ydk::YLeaf ccallhistorydisconnecttext; //type: string
        ydk::YLeaf ccallhistoryconnecttime; //type: uint32
        ydk::YLeaf ccallhistorydisconnecttime; //type: uint32
        ydk::YLeaf ccallhistorycallorigin; //type: Ccallhistorycallorigin
        ydk::YLeaf ccallhistorychargedunits; //type: uint32
        ydk::YLeaf ccallhistoryinfotype; //type: Ccallhistoryinfotype
        ydk::YLeaf ccallhistorytransmitpackets; //type: uint32
        ydk::YLeaf ccallhistorytransmitbytes; //type: uint32
        ydk::YLeaf ccallhistoryreceivepackets; //type: uint32
        ydk::YLeaf ccallhistoryreceivebytes; //type: uint32
        ydk::YLeaf ccallhistoryreleasesource; //type: Ccallhistoryreleasesource
        ydk::YLeaf ccallhistoryreleasesrc; //type: Ccallhistoryreleasesrc
        class Ccallhistorycallorigin;
        class Ccallhistoryinfotype;
        class Ccallhistoryreleasesource;
        class Ccallhistoryreleasesrc;

}; // CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry


class CiscoDialControlMib::Ccallhistoryiectable : public ydk::Entity
{
    public:
        Ccallhistoryiectable();
        ~Ccallhistoryiectable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ccallhistoryiecentry; //type: CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry

        std::vector<std::shared_ptr<CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry> > ccallhistoryiecentry;
        
}; // CiscoDialControlMib::Ccallhistoryiectable


class CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry : public ydk::Entity
{
    public:
        Ccallhistoryiecentry();
        ~Ccallhistoryiecentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::ccallhistoryindex)
        ydk::YLeaf ccallhistoryindex;
        ydk::YLeaf ccallhistoryiecindex; //type: uint32
        ydk::YLeaf ccallhistoryiec; //type: string

}; // CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry

class CiscoDialControlMib::Cpeerglobalconfiguration::Cpeersearchtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf datavoice;
        static const ydk::Enum::YLeaf voicedata;

};

class CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistorycallorigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf originate;
        static const ydk::Enum::YLeaf answer;
        static const ydk::Enum::YLeaf callback;

};

class CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf speech;
        static const ydk::Enum::YLeaf unrestrictedDigital;
        static const ydk::Enum::YLeaf unrestrictedDigital56;
        static const ydk::Enum::YLeaf restrictedDigital;
        static const ydk::Enum::YLeaf audio31;
        static const ydk::Enum::YLeaf audio7;
        static const ydk::Enum::YLeaf video;
        static const ydk::Enum::YLeaf packetSwitched;
        static const ydk::Enum::YLeaf fax;

};

class CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf callingPartyInPstn;
        static const ydk::Enum::YLeaf callingPartyInVoip;
        static const ydk::Enum::YLeaf calledPartyInPstn;
        static const ydk::Enum::YLeaf calledPartyInVoip;
        static const ydk::Enum::YLeaf internalRelease;
        static const ydk::Enum::YLeaf internalCallControlApp;
        static const ydk::Enum::YLeaf consoleCommand;
        static const ydk::Enum::YLeaf externalRadiusServer;
        static const ydk::Enum::YLeaf externalNmsApp;
        static const ydk::Enum::YLeaf externalCallControlAgent;

};

class CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf callingPartyInPstn;
        static const ydk::Enum::YLeaf callingPartyInVoip;
        static const ydk::Enum::YLeaf calledPartyInPstn;
        static const ydk::Enum::YLeaf calledPartyInVoip;
        static const ydk::Enum::YLeaf internalReleaseInPotsLeg;
        static const ydk::Enum::YLeaf internalReleaseInVoipLeg;
        static const ydk::Enum::YLeaf internalCallControlApp;
        static const ydk::Enum::YLeaf internalReleaseInVoipAAA;
        static const ydk::Enum::YLeaf consoleCommand;
        static const ydk::Enum::YLeaf externalRadiusServer;
        static const ydk::Enum::YLeaf externalNmsApp;
        static const ydk::Enum::YLeaf externalCallControlAgent;
        static const ydk::Enum::YLeaf gatekeeper;
        static const ydk::Enum::YLeaf externalGKTMPServer;

};


}
}

#endif /* _CISCO_DIAL_CONTROL_MIB_ */

