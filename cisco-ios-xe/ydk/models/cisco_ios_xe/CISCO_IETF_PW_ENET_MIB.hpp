#ifndef _CISCO_IETF_PW_ENET_MIB_
#define _CISCO_IETF_PW_ENET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IETF_PW_ENET_MIB {

class CiscoIetfPwEnetMib : public Entity
{
    public:
        CiscoIetfPwEnetMib();
        ~CiscoIetfPwEnetMib();

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

        class Cpwvcenettable; //type: CiscoIetfPwEnetMib::Cpwvcenettable
        class Cpwvcenetmplsprimappingtable; //type: CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable
        class Cpwvcenetstatstable; //type: CiscoIetfPwEnetMib::Cpwvcenetstatstable

        std::shared_ptr<CISCO_IETF_PW_ENET_MIB::CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable> cpwvcenetmplsprimappingtable_;
        std::shared_ptr<CISCO_IETF_PW_ENET_MIB::CiscoIetfPwEnetMib::Cpwvcenetstatstable> cpwvcenetstatstable_;
        std::shared_ptr<CISCO_IETF_PW_ENET_MIB::CiscoIetfPwEnetMib::Cpwvcenettable> cpwvcenettable_;
        
}; // CiscoIetfPwEnetMib


class CiscoIetfPwEnetMib::Cpwvcenettable : public Entity
{
    public:
        Cpwvcenettable();
        ~Cpwvcenettable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcenetentry; //type: CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_ENET_MIB::CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry> > cpwvcenetentry_;
        
}; // CiscoIetfPwEnetMib::Cpwvcenettable


class CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry : public Entity
{
    public:
        Cpwvcenetentry();
        ~Cpwvcenetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwvcenetpwvlan; //type: int32
        YLeaf cpwvcenetvlanmode; //type: CpwvcenetvlanmodeEnum
        YLeaf cpwvcenetportvlan; //type: int32
        YLeaf cpwvcenetvcifindex; //type: int32
        YLeaf cpwvcenetportifindex; //type: int32
        YLeaf cpwvcenetrowstatus; //type: RowstatusEnum
        YLeaf cpwvcenetstoragetype; //type: StoragetypeEnum
        class CpwvcenetvlanmodeEnum;

}; // CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry


class CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable : public Entity
{
    public:
        Cpwvcenetmplsprimappingtable();
        ~Cpwvcenetmplsprimappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcenetmplsprimappingtableentry; //type: CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_ENET_MIB::CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry> > cpwvcenetmplsprimappingtableentry_;
        
}; // CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable


class CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry : public Entity
{
    public:
        Cpwvcenetmplsprimappingtableentry();
        ~Cpwvcenetmplsprimappingtableentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwvcenetmplsprimapping; //type: Cpwvcenetmplsprimapping
        YLeaf cpwvcenetmplsprimappingrowstatus; //type: RowstatusEnum
        YLeaf cpwvcenetmplsprimappingstoragetype; //type: StoragetypeEnum

}; // CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry


class CiscoIetfPwEnetMib::Cpwvcenetstatstable : public Entity
{
    public:
        Cpwvcenetstatstable();
        ~Cpwvcenetstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcenetstatsentry; //type: CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_ENET_MIB::CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry> > cpwvcenetstatsentry_;
        
}; // CiscoIetfPwEnetMib::Cpwvcenetstatstable


class CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry : public Entity
{
    public:
        Cpwvcenetstatsentry();
        ~Cpwvcenetstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwvcenetstatsillegalvlan; //type: uint64
        YLeaf cpwvcenetstatsillegallength; //type: uint64

}; // CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry

class CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::CpwvcenetvlanmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf portBased;
        static const Enum::YLeaf noChange;
        static const Enum::YLeaf changeVlan;
        static const Enum::YLeaf addVlan;
        static const Enum::YLeaf removeVlan;

};


}
}

#endif /* _CISCO_IETF_PW_ENET_MIB_ */

