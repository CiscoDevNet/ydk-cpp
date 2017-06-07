#ifndef _CISCO_EMBEDDED_EVENT_MGR_MIB_
#define _CISCO_EMBEDDED_EVENT_MGR_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_EMBEDDED_EVENT_MGR_MIB {

class CiscoEmbeddedEventMgrMib : public Entity
{
    public:
        CiscoEmbeddedEventMgrMib();
        ~CiscoEmbeddedEventMgrMib();

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

        class Ceemhistory; //type: CiscoEmbeddedEventMgrMib::Ceemhistory
        class Ceemeventmaptable; //type: CiscoEmbeddedEventMgrMib::Ceemeventmaptable
        class Ceemhistoryeventtable; //type: CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable
        class Ceemregisteredpolicytable; //type: CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable

        std::shared_ptr<CISCO_EMBEDDED_EVENT_MGR_MIB::CiscoEmbeddedEventMgrMib::Ceemeventmaptable> ceemeventmaptable;
        std::shared_ptr<CISCO_EMBEDDED_EVENT_MGR_MIB::CiscoEmbeddedEventMgrMib::Ceemhistory> ceemhistory;
        std::shared_ptr<CISCO_EMBEDDED_EVENT_MGR_MIB::CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable> ceemhistoryeventtable;
        std::shared_ptr<CISCO_EMBEDDED_EVENT_MGR_MIB::CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable> ceemregisteredpolicytable;
        
}; // CiscoEmbeddedEventMgrMib


class CiscoEmbeddedEventMgrMib::Ceemhistory : public Entity
{
    public:
        Ceemhistory();
        ~Ceemhistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ceemhistorymaxevententries; //type: int32
        YLeaf ceemhistorylastevententry; //type: uint32

}; // CiscoEmbeddedEventMgrMib::Ceemhistory


class CiscoEmbeddedEventMgrMib::Ceemeventmaptable : public Entity
{
    public:
        Ceemeventmaptable();
        ~Ceemeventmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceemeventmapentry; //type: CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry

        std::vector<std::shared_ptr<CISCO_EMBEDDED_EVENT_MGR_MIB::CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry> > ceemeventmapentry;
        
}; // CiscoEmbeddedEventMgrMib::Ceemeventmaptable


class CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry : public Entity
{
    public:
        Ceemeventmapentry();
        ~Ceemeventmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ceemeventindex; //type: uint32
        YLeaf ceemeventname; //type: string
        YLeaf ceemeventdescrtext; //type: string

}; // CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry


class CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable : public Entity
{
    public:
        Ceemhistoryeventtable();
        ~Ceemhistoryeventtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceemhistoryevententry; //type: CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry

        std::vector<std::shared_ptr<CISCO_EMBEDDED_EVENT_MGR_MIB::CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry> > ceemhistoryevententry;
        
}; // CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable


class CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry : public Entity
{
    public:
        Ceemhistoryevententry();
        ~Ceemhistoryevententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ceemhistoryeventindex; //type: uint32
        YLeaf ceemhistoryeventtype1; //type: uint32
        YLeaf ceemhistoryeventtype2; //type: uint32
        YLeaf ceemhistoryeventtype3; //type: uint32
        YLeaf ceemhistoryeventtype4; //type: uint32
        YLeaf ceemhistorypolicypath; //type: string
        YLeaf ceemhistorypolicyname; //type: string
        YLeaf ceemhistorypolicyexitstatus; //type: int32
        YLeaf ceemhistorypolicyintdata1; //type: int32
        YLeaf ceemhistorypolicyintdata2; //type: int32
        YLeaf ceemhistorypolicystrdata; //type: string
        YLeaf ceemhistorynotifytype; //type: NotifysourceEnum
        YLeaf ceemhistoryeventtype5; //type: uint32
        YLeaf ceemhistoryeventtype6; //type: uint32
        YLeaf ceemhistoryeventtype7; //type: uint32
        YLeaf ceemhistoryeventtype8; //type: uint32

}; // CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry


class CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable : public Entity
{
    public:
        Ceemregisteredpolicytable();
        ~Ceemregisteredpolicytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceemregisteredpolicyentry; //type: CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry

        std::vector<std::shared_ptr<CISCO_EMBEDDED_EVENT_MGR_MIB::CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry> > ceemregisteredpolicyentry;
        
}; // CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable


class CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry : public Entity
{
    public:
        Ceemregisteredpolicyentry();
        ~Ceemregisteredpolicyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ceemregisteredpolicyindex; //type: uint32
        YLeaf ceemregisteredpolicyname; //type: string
        YLeaf ceemregisteredpolicyeventtype1; //type: uint32
        YLeaf ceemregisteredpolicyeventtype2; //type: uint32
        YLeaf ceemregisteredpolicyeventtype3; //type: uint32
        YLeaf ceemregisteredpolicyeventtype4; //type: uint32
        YLeaf ceemregisteredpolicystatus; //type: CeemregisteredpolicystatusEnum
        YLeaf ceemregisteredpolicytype; //type: CeemregisteredpolicytypeEnum
        YLeaf ceemregisteredpolicynotifflag; //type: boolean
        YLeaf ceemregisteredpolicyregtime; //type: string
        YLeaf ceemregisteredpolicyenabledtime; //type: string
        YLeaf ceemregisteredpolicyruntime; //type: string
        YLeaf ceemregisteredpolicyruncount; //type: uint32
        YLeaf ceemregisteredpolicyeventtype5; //type: uint32
        YLeaf ceemregisteredpolicyeventtype6; //type: uint32
        YLeaf ceemregisteredpolicyeventtype7; //type: uint32
        YLeaf ceemregisteredpolicyeventtype8; //type: uint32
        class CeemregisteredpolicystatusEnum;
        class CeemregisteredpolicytypeEnum;

}; // CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry

class NotifysourceEnum : public Enum
{
    public:
        static const Enum::YLeaf server;
        static const Enum::YLeaf policy;

};

class CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::CeemregisteredpolicystatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::CeemregisteredpolicytypeEnum : public Enum
{
    public:
        static const Enum::YLeaf user;
        static const Enum::YLeaf system;

};


}
}

#endif /* _CISCO_EMBEDDED_EVENT_MGR_MIB_ */

