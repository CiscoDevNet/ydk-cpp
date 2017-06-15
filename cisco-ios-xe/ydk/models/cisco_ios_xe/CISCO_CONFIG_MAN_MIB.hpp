#ifndef _CISCO_CONFIG_MAN_MIB_
#define _CISCO_CONFIG_MAN_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_CONFIG_MAN_MIB {

class CiscoConfigManMib : public Entity
{
    public:
        CiscoConfigManMib();
        ~CiscoConfigManMib();

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

        class Ccmhistory; //type: CiscoConfigManMib::Ccmhistory
        class Ccmclihistory; //type: CiscoConfigManMib::Ccmclihistory
        class Ccmclicfg; //type: CiscoConfigManMib::Ccmclicfg
        class Ccmctidobjects; //type: CiscoConfigManMib::Ccmctidobjects
        class Ccmhistoryeventtable; //type: CiscoConfigManMib::Ccmhistoryeventtable
        class Ccmclihistorycommandtable; //type: CiscoConfigManMib::Ccmclihistorycommandtable

        std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmclicfg> ccmclicfg_;
        std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmclihistory> ccmclihistory_;
        std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmclihistorycommandtable> ccmclihistorycommandtable_;
        std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmctidobjects> ccmctidobjects_;
        std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmhistory> ccmhistory_;
        std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmhistoryeventtable> ccmhistoryeventtable_;
        
}; // CiscoConfigManMib


class CiscoConfigManMib::Ccmhistory : public Entity
{
    public:
        Ccmhistory();
        ~Ccmhistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ccmhistoryrunninglastchanged; //type: uint32
        YLeaf ccmhistoryrunninglastsaved; //type: uint32
        YLeaf ccmhistorystartuplastchanged; //type: uint32
        YLeaf ccmhistorymaxevententries; //type: int32
        YLeaf ccmhistoryevententriesbumped; //type: uint32

}; // CiscoConfigManMib::Ccmhistory


class CiscoConfigManMib::Ccmclihistory : public Entity
{
    public:
        Ccmclihistory();
        ~Ccmclihistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ccmclihistorymaxcmdentries; //type: uint32
        YLeaf ccmclihistorycmdentries; //type: uint32
        YLeaf ccmclihistorycmdentriesallowed; //type: uint32

}; // CiscoConfigManMib::Ccmclihistory


class CiscoConfigManMib::Ccmclicfg : public Entity
{
    public:
        Ccmclicfg();
        ~Ccmclicfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ccmclicfgrunconfnotifenable; //type: boolean

}; // CiscoConfigManMib::Ccmclicfg


class CiscoConfigManMib::Ccmctidobjects : public Entity
{
    public:
        Ccmctidobjects();
        ~Ccmctidobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ccmctid; //type: uint64
        YLeaf ccmctidlastchangetime; //type: string
        YLeaf ccmctidwhochanged; //type: string
        YLeaf ccmctidrolledovernotifenable; //type: boolean

}; // CiscoConfigManMib::Ccmctidobjects


class CiscoConfigManMib::Ccmhistoryeventtable : public Entity
{
    public:
        Ccmhistoryeventtable();
        ~Ccmhistoryeventtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ccmhistoryevententry; //type: CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry

        std::vector<std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry> > ccmhistoryevententry_;
        
}; // CiscoConfigManMib::Ccmhistoryeventtable


class CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry : public Entity
{
    public:
        Ccmhistoryevententry();
        ~Ccmhistoryevententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ccmhistoryeventindex; //type: int32
        YLeaf ccmhistoryeventtime; //type: uint32
        YLeaf ccmhistoryeventcommandsource; //type: CcmhistoryeventcommandsourceEnum
        YLeaf ccmhistoryeventconfigsource; //type: HistoryeventmediumEnum
        YLeaf ccmhistoryeventconfigdestination; //type: HistoryeventmediumEnum
        YLeaf ccmhistoryeventterminaltype; //type: CcmhistoryeventterminaltypeEnum
        YLeaf ccmhistoryeventterminalnumber; //type: int32
        YLeaf ccmhistoryeventterminaluser; //type: string
        YLeaf ccmhistoryeventterminallocation; //type: string
        YLeaf ccmhistoryeventcommandsourceaddress; //type: string
        YLeaf ccmhistoryeventvirtualhostname; //type: string
        YLeaf ccmhistoryeventserveraddress; //type: string
        YLeaf ccmhistoryeventfile; //type: string
        YLeaf ccmhistoryeventrcpuser; //type: string
        YLeaf ccmhistoryclicmdentriesbumped; //type: uint32
        YLeaf ccmhistoryeventcommandsourceaddrtype; //type: InetaddresstypeEnum
        YLeaf ccmhistoryeventcommandsourceaddrrev1; //type: binary
        YLeaf ccmhistoryeventserveraddrtype; //type: InetaddresstypeEnum
        YLeaf ccmhistoryeventserveraddrrev1; //type: binary
        class CcmhistoryeventcommandsourceEnum;
        class CcmhistoryeventterminaltypeEnum;

}; // CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry


class CiscoConfigManMib::Ccmclihistorycommandtable : public Entity
{
    public:
        Ccmclihistorycommandtable();
        ~Ccmclihistorycommandtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ccmclihistorycommandentry; //type: CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry

        std::vector<std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry> > ccmclihistorycommandentry_;
        
}; // CiscoConfigManMib::Ccmclihistorycommandtable


class CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry : public Entity
{
    public:
        Ccmclihistorycommandentry();
        ~Ccmclihistorycommandentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::ccmhistoryeventindex)
        YLeaf ccmhistoryeventindex;
        YLeaf ccmclihistorycommandindex; //type: uint32
        YLeaf ccmclihistorycommand; //type: string

}; // CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry

class HistoryeventmediumEnum : public Enum
{
    public:
        static const Enum::YLeaf erase;
        static const Enum::YLeaf commandSource;
        static const Enum::YLeaf running;
        static const Enum::YLeaf startup;
        static const Enum::YLeaf local;
        static const Enum::YLeaf networkTftp;
        static const Enum::YLeaf networkRcp;
        static const Enum::YLeaf networkFtp;
        static const Enum::YLeaf networkScp;

};

class CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::CcmhistoryeventcommandsourceEnum : public Enum
{
    public:
        static const Enum::YLeaf commandLine;
        static const Enum::YLeaf snmp;

};

class CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::CcmhistoryeventterminaltypeEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf console;
        static const Enum::YLeaf terminal;
        static const Enum::YLeaf virtual_;
        static const Enum::YLeaf auxiliary;

};


}
}

#endif /* _CISCO_CONFIG_MAN_MIB_ */

