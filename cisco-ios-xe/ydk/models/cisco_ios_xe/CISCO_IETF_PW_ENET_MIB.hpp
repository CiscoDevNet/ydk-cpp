#ifndef _CISCO_IETF_PW_ENET_MIB_
#define _CISCO_IETF_PW_ENET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_PW_ENET_MIB {

class CiscoIetfPwEnetMib : public ydk::Entity
{
    public:
        CiscoIetfPwEnetMib();
        ~CiscoIetfPwEnetMib();

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

        class Cpwvcenettable; //type: CiscoIetfPwEnetMib::Cpwvcenettable
        class Cpwvcenetmplsprimappingtable; //type: CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable
        class Cpwvcenetstatstable; //type: CiscoIetfPwEnetMib::Cpwvcenetstatstable

        std::shared_ptr<CISCO_IETF_PW_ENET_MIB::CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable> cpwvcenetmplsprimappingtable;
        std::shared_ptr<CISCO_IETF_PW_ENET_MIB::CiscoIetfPwEnetMib::Cpwvcenetstatstable> cpwvcenetstatstable;
        std::shared_ptr<CISCO_IETF_PW_ENET_MIB::CiscoIetfPwEnetMib::Cpwvcenettable> cpwvcenettable;
        
}; // CiscoIetfPwEnetMib


class CiscoIetfPwEnetMib::Cpwvcenettable : public ydk::Entity
{
    public:
        Cpwvcenettable();
        ~Cpwvcenettable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcenetentry; //type: CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_ENET_MIB::CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry> > cpwvcenetentry;
        
}; // CiscoIetfPwEnetMib::Cpwvcenettable


class CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry : public ydk::Entity
{
    public:
        Cpwvcenetentry();
        ~Cpwvcenetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcenetpwvlan; //type: int32
        ydk::YLeaf cpwvcenetvlanmode; //type: Cpwvcenetvlanmode
        ydk::YLeaf cpwvcenetportvlan; //type: int32
        ydk::YLeaf cpwvcenetvcifindex; //type: int32
        ydk::YLeaf cpwvcenetportifindex; //type: int32
        ydk::YLeaf cpwvcenetrowstatus; //type: Rowstatus
        ydk::YLeaf cpwvcenetstoragetype; //type: Storagetype
        class Cpwvcenetvlanmode;

}; // CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry


class CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable : public ydk::Entity
{
    public:
        Cpwvcenetmplsprimappingtable();
        ~Cpwvcenetmplsprimappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcenetmplsprimappingtableentry; //type: CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_ENET_MIB::CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry> > cpwvcenetmplsprimappingtableentry;
        
}; // CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable


class CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry : public ydk::Entity
{
    public:
        Cpwvcenetmplsprimappingtableentry();
        ~Cpwvcenetmplsprimappingtableentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcenetmplsprimapping; //type: Cpwvcenetmplsprimapping
        ydk::YLeaf cpwvcenetmplsprimappingrowstatus; //type: Rowstatus
        ydk::YLeaf cpwvcenetmplsprimappingstoragetype; //type: Storagetype

}; // CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry


class CiscoIetfPwEnetMib::Cpwvcenetstatstable : public ydk::Entity
{
    public:
        Cpwvcenetstatstable();
        ~Cpwvcenetstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcenetstatsentry; //type: CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_ENET_MIB::CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry> > cpwvcenetstatsentry;
        
}; // CiscoIetfPwEnetMib::Cpwvcenetstatstable


class CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry : public ydk::Entity
{
    public:
        Cpwvcenetstatsentry();
        ~Cpwvcenetstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcenetstatsillegalvlan; //type: uint64
        ydk::YLeaf cpwvcenetstatsillegallength; //type: uint64

}; // CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry

class CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::Cpwvcenetvlanmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf portBased;
        static const ydk::Enum::YLeaf noChange;
        static const ydk::Enum::YLeaf changeVlan;
        static const ydk::Enum::YLeaf addVlan;
        static const ydk::Enum::YLeaf removeVlan;

};


}
}

#endif /* _CISCO_IETF_PW_ENET_MIB_ */

