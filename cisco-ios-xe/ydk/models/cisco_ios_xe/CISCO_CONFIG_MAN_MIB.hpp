#ifndef _CISCO_CONFIG_MAN_MIB_
#define _CISCO_CONFIG_MAN_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CONFIG_MAN_MIB {

class CiscoConfigManMib : public ydk::Entity
{
    public:
        CiscoConfigManMib();
        ~CiscoConfigManMib();

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

        class Ccmhistory; //type: CiscoConfigManMib::Ccmhistory
        class Ccmclihistory; //type: CiscoConfigManMib::Ccmclihistory
        class Ccmclicfg; //type: CiscoConfigManMib::Ccmclicfg
        class Ccmctidobjects; //type: CiscoConfigManMib::Ccmctidobjects
        class Ccmhistoryeventtable; //type: CiscoConfigManMib::Ccmhistoryeventtable
        class Ccmclihistorycommandtable; //type: CiscoConfigManMib::Ccmclihistorycommandtable

        std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmclicfg> ccmclicfg;
        std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmclihistory> ccmclihistory;
        std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmclihistorycommandtable> ccmclihistorycommandtable;
        std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmctidobjects> ccmctidobjects;
        std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmhistory> ccmhistory;
        std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmhistoryeventtable> ccmhistoryeventtable;
        
}; // CiscoConfigManMib


class CiscoConfigManMib::Ccmhistory : public ydk::Entity
{
    public:
        Ccmhistory();
        ~Ccmhistory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccmhistoryrunninglastchanged; //type: uint32
        ydk::YLeaf ccmhistoryrunninglastsaved; //type: uint32
        ydk::YLeaf ccmhistorystartuplastchanged; //type: uint32
        ydk::YLeaf ccmhistorymaxevententries; //type: int32
        ydk::YLeaf ccmhistoryevententriesbumped; //type: uint32

}; // CiscoConfigManMib::Ccmhistory


class CiscoConfigManMib::Ccmclihistory : public ydk::Entity
{
    public:
        Ccmclihistory();
        ~Ccmclihistory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccmclihistorymaxcmdentries; //type: uint32
        ydk::YLeaf ccmclihistorycmdentries; //type: uint32
        ydk::YLeaf ccmclihistorycmdentriesallowed; //type: uint32

}; // CiscoConfigManMib::Ccmclihistory


class CiscoConfigManMib::Ccmclicfg : public ydk::Entity
{
    public:
        Ccmclicfg();
        ~Ccmclicfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccmclicfgrunconfnotifenable; //type: boolean

}; // CiscoConfigManMib::Ccmclicfg


class CiscoConfigManMib::Ccmctidobjects : public ydk::Entity
{
    public:
        Ccmctidobjects();
        ~Ccmctidobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccmctid; //type: uint64
        ydk::YLeaf ccmctidlastchangetime; //type: string
        ydk::YLeaf ccmctidwhochanged; //type: string
        ydk::YLeaf ccmctidrolledovernotifenable; //type: boolean

}; // CiscoConfigManMib::Ccmctidobjects


class CiscoConfigManMib::Ccmhistoryeventtable : public ydk::Entity
{
    public:
        Ccmhistoryeventtable();
        ~Ccmhistoryeventtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ccmhistoryevententry; //type: CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry

        std::vector<std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry> > ccmhistoryevententry;
        
}; // CiscoConfigManMib::Ccmhistoryeventtable


class CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry : public ydk::Entity
{
    public:
        Ccmhistoryevententry();
        ~Ccmhistoryevententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccmhistoryeventindex; //type: int32
        ydk::YLeaf ccmhistoryeventtime; //type: uint32
        ydk::YLeaf ccmhistoryeventcommandsource; //type: Ccmhistoryeventcommandsource
        ydk::YLeaf ccmhistoryeventconfigsource; //type: Historyeventmedium
        ydk::YLeaf ccmhistoryeventconfigdestination; //type: Historyeventmedium
        ydk::YLeaf ccmhistoryeventterminaltype; //type: Ccmhistoryeventterminaltype
        ydk::YLeaf ccmhistoryeventterminalnumber; //type: int32
        ydk::YLeaf ccmhistoryeventterminaluser; //type: string
        ydk::YLeaf ccmhistoryeventterminallocation; //type: string
        ydk::YLeaf ccmhistoryeventcommandsourceaddress; //type: string
        ydk::YLeaf ccmhistoryeventvirtualhostname; //type: string
        ydk::YLeaf ccmhistoryeventserveraddress; //type: string
        ydk::YLeaf ccmhistoryeventfile; //type: string
        ydk::YLeaf ccmhistoryeventrcpuser; //type: string
        ydk::YLeaf ccmhistoryclicmdentriesbumped; //type: uint32
        ydk::YLeaf ccmhistoryeventcommandsourceaddrtype; //type: Inetaddresstype
        ydk::YLeaf ccmhistoryeventcommandsourceaddrrev1; //type: binary
        ydk::YLeaf ccmhistoryeventserveraddrtype; //type: Inetaddresstype
        ydk::YLeaf ccmhistoryeventserveraddrrev1; //type: binary
        class Ccmhistoryeventcommandsource;
        class Ccmhistoryeventterminaltype;

}; // CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry


class CiscoConfigManMib::Ccmclihistorycommandtable : public ydk::Entity
{
    public:
        Ccmclihistorycommandtable();
        ~Ccmclihistorycommandtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ccmclihistorycommandentry; //type: CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry

        std::vector<std::shared_ptr<CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry> > ccmclihistorycommandentry;
        
}; // CiscoConfigManMib::Ccmclihistorycommandtable


class CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry : public ydk::Entity
{
    public:
        Ccmclihistorycommandentry();
        ~Ccmclihistorycommandentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_CONFIG_MAN_MIB::CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::ccmhistoryeventindex)
        ydk::YLeaf ccmhistoryeventindex;
        ydk::YLeaf ccmclihistorycommandindex; //type: uint32
        ydk::YLeaf ccmclihistorycommand; //type: string

}; // CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry

class Historyeventmedium : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf erase;
        static const ydk::Enum::YLeaf commandSource;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf startup;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf networkTftp;
        static const ydk::Enum::YLeaf networkRcp;
        static const ydk::Enum::YLeaf networkFtp;
        static const ydk::Enum::YLeaf networkScp;

};

class CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::Ccmhistoryeventcommandsource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf commandLine;
        static const ydk::Enum::YLeaf snmp;

};

class CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::Ccmhistoryeventterminaltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf console;
        static const ydk::Enum::YLeaf terminal;
        static const ydk::Enum::YLeaf virtual_;
        static const ydk::Enum::YLeaf auxiliary;

};


}
}

#endif /* _CISCO_CONFIG_MAN_MIB_ */

