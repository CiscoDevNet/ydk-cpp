#ifndef _CISCO_AAA_SESSION_MIB_
#define _CISCO_AAA_SESSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_AAA_SESSION_MIB {

class CiscoAaaSessionMib : public ydk::Entity
{
    public:
        CiscoAaaSessionMib();
        ~CiscoAaaSessionMib();

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

        class Casnactive; //type: CiscoAaaSessionMib::Casnactive
        class Casngeneral; //type: CiscoAaaSessionMib::Casngeneral
        class Casnactivetable; //type: CiscoAaaSessionMib::Casnactivetable

        std::shared_ptr<CISCO_AAA_SESSION_MIB::CiscoAaaSessionMib::Casnactive> casnactive;
        std::shared_ptr<CISCO_AAA_SESSION_MIB::CiscoAaaSessionMib::Casnactivetable> casnactivetable;
        std::shared_ptr<CISCO_AAA_SESSION_MIB::CiscoAaaSessionMib::Casngeneral> casngeneral;
        
}; // CiscoAaaSessionMib


class CiscoAaaSessionMib::Casnactive : public ydk::Entity
{
    public:
        Casnactive();
        ~Casnactive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf casnactivetableentries; //type: uint32
        ydk::YLeaf casnactivetablehighwatermark; //type: uint32

}; // CiscoAaaSessionMib::Casnactive


class CiscoAaaSessionMib::Casngeneral : public ydk::Entity
{
    public:
        Casngeneral();
        ~Casngeneral();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf casntotalsessions; //type: uint32
        ydk::YLeaf casndisconnectedsessions; //type: uint32

}; // CiscoAaaSessionMib::Casngeneral


class CiscoAaaSessionMib::Casnactivetable : public ydk::Entity
{
    public:
        Casnactivetable();
        ~Casnactivetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Casnactiveentry; //type: CiscoAaaSessionMib::Casnactivetable::Casnactiveentry

        std::vector<std::shared_ptr<CISCO_AAA_SESSION_MIB::CiscoAaaSessionMib::Casnactivetable::Casnactiveentry> > casnactiveentry;
        
}; // CiscoAaaSessionMib::Casnactivetable


class CiscoAaaSessionMib::Casnactivetable::Casnactiveentry : public ydk::Entity
{
    public:
        Casnactiveentry();
        ~Casnactiveentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf casnsessionid; //type: uint32
        ydk::YLeaf casnuserid; //type: string
        ydk::YLeaf casnipaddr; //type: string
        ydk::YLeaf casnidletime; //type: uint32
        ydk::YLeaf casndisconnect; //type: boolean
        ydk::YLeaf casncalltrackerid; //type: uint32
        ydk::YLeaf casnnasport; //type: string
        ydk::YLeaf casnvaiifindex; //type: int32

}; // CiscoAaaSessionMib::Casnactivetable::Casnactiveentry


}
}

#endif /* _CISCO_AAA_SESSION_MIB_ */

