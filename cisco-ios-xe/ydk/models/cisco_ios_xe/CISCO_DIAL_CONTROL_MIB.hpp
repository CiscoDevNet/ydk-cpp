#ifndef _CISCO_DIAL_CONTROL_MIB_
#define _CISCO_DIAL_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_DIAL_CONTROL_MIB {

class CiscoDialControlMib : public Entity
{
    public:
        CiscoDialControlMib();
        ~CiscoDialControlMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Cpeerglobalconfiguration; //type: CiscoDialControlMib::Cpeerglobalconfiguration
        class Ccallhistorytable; //type: CiscoDialControlMib::Ccallhistorytable
        class Ccallhistoryiectable; //type: CiscoDialControlMib::Ccallhistoryiectable

        std::shared_ptr<CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistoryiectable> ccallhistoryiectable_;
        std::shared_ptr<CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistorytable> ccallhistorytable_;
        std::shared_ptr<CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Cpeerglobalconfiguration> cpeerglobalconfiguration_;
        
}; // CiscoDialControlMib


class CiscoDialControlMib::Cpeerglobalconfiguration : public Entity
{
    public:
        Cpeerglobalconfiguration();
        ~Cpeerglobalconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpeersearchtype; //type: CpeersearchtypeEnum
        class CpeersearchtypeEnum;

}; // CiscoDialControlMib::Cpeerglobalconfiguration


class CiscoDialControlMib::Ccallhistorytable : public Entity
{
    public:
        Ccallhistorytable();
        ~Ccallhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ccallhistoryentry; //type: CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry

        std::vector<std::shared_ptr<CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry> > ccallhistoryentry_;
        
}; // CiscoDialControlMib::Ccallhistorytable


class CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry : public Entity
{
    public:
        Ccallhistoryentry();
        ~Ccallhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ccallhistoryindex; //type: uint32
        YLeaf ccallhistorysetuptime; //type: uint32
        YLeaf ccallhistorypeeraddress; //type: string
        YLeaf ccallhistorypeersubaddress; //type: string
        YLeaf ccallhistorypeerid; //type: int32
        YLeaf ccallhistorypeerifindex; //type: int32
        YLeaf ccallhistorylogicalifindex; //type: int32
        YLeaf ccallhistorydisconnectcause; //type: binary
        YLeaf ccallhistorydisconnecttext; //type: string
        YLeaf ccallhistoryconnecttime; //type: uint32
        YLeaf ccallhistorydisconnecttime; //type: uint32
        YLeaf ccallhistorycallorigin; //type: CcallhistorycalloriginEnum
        YLeaf ccallhistorychargedunits; //type: uint32
        YLeaf ccallhistoryinfotype; //type: CcallhistoryinfotypeEnum
        YLeaf ccallhistorytransmitpackets; //type: uint32
        YLeaf ccallhistorytransmitbytes; //type: uint32
        YLeaf ccallhistoryreceivepackets; //type: uint32
        YLeaf ccallhistoryreceivebytes; //type: uint32
        YLeaf ccallhistoryreleasesource; //type: CcallhistoryreleasesourceEnum
        YLeaf ccallhistoryreleasesrc; //type: CcallhistoryreleasesrcEnum
        class CcallhistorycalloriginEnum;
        class CcallhistoryinfotypeEnum;
        class CcallhistoryreleasesourceEnum;
        class CcallhistoryreleasesrcEnum;

}; // CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry


class CiscoDialControlMib::Ccallhistoryiectable : public Entity
{
    public:
        Ccallhistoryiectable();
        ~Ccallhistoryiectable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ccallhistoryiecentry; //type: CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry

        std::vector<std::shared_ptr<CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry> > ccallhistoryiecentry_;
        
}; // CiscoDialControlMib::Ccallhistoryiectable


class CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry : public Entity
{
    public:
        Ccallhistoryiecentry();
        ~Ccallhistoryiecentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::ccallhistoryindex)
        YLeaf ccallhistoryindex;
        YLeaf ccallhistoryiecindex; //type: uint32
        YLeaf ccallhistoryiec; //type: string

}; // CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry

class CiscoDialControlMib::Cpeerglobalconfiguration::CpeersearchtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf datavoice;
        static const Enum::YLeaf voicedata;

};

class CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistorycalloriginEnum : public Enum
{
    public:
        static const Enum::YLeaf originate;
        static const Enum::YLeaf answer;
        static const Enum::YLeaf callback;

};

class CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryinfotypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf speech;
        static const Enum::YLeaf unrestrictedDigital;
        static const Enum::YLeaf unrestrictedDigital56;
        static const Enum::YLeaf restrictedDigital;
        static const Enum::YLeaf audio31;
        static const Enum::YLeaf audio7;
        static const Enum::YLeaf video;
        static const Enum::YLeaf packetSwitched;
        static const Enum::YLeaf fax;

};

class CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesourceEnum : public Enum
{
    public:
        static const Enum::YLeaf callingPartyInPstn;
        static const Enum::YLeaf callingPartyInVoip;
        static const Enum::YLeaf calledPartyInPstn;
        static const Enum::YLeaf calledPartyInVoip;
        static const Enum::YLeaf internalRelease;
        static const Enum::YLeaf internalCallControlApp;
        static const Enum::YLeaf consoleCommand;
        static const Enum::YLeaf externalRadiusServer;
        static const Enum::YLeaf externalNmsApp;
        static const Enum::YLeaf externalCallControlAgent;

};

class CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum : public Enum
{
    public:
        static const Enum::YLeaf callingPartyInPstn;
        static const Enum::YLeaf callingPartyInVoip;
        static const Enum::YLeaf calledPartyInPstn;
        static const Enum::YLeaf calledPartyInVoip;
        static const Enum::YLeaf internalReleaseInPotsLeg;
        static const Enum::YLeaf internalReleaseInVoipLeg;
        static const Enum::YLeaf internalCallControlApp;
        static const Enum::YLeaf internalReleaseInVoipAAA;
        static const Enum::YLeaf consoleCommand;
        static const Enum::YLeaf externalRadiusServer;
        static const Enum::YLeaf externalNmsApp;
        static const Enum::YLeaf externalCallControlAgent;
        static const Enum::YLeaf gatekeeper;
        static const Enum::YLeaf externalGKTMPServer;

};


}
}

#endif /* _CISCO_DIAL_CONTROL_MIB_ */

