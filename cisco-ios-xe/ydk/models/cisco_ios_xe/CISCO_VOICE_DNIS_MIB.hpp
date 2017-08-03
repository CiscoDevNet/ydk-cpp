#ifndef _CISCO_VOICE_DNIS_MIB_
#define _CISCO_VOICE_DNIS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_VOICE_DNIS_MIB {

class CiscoVoiceDnisMib : public ydk::Entity
{
    public:
        CiscoVoiceDnisMib();
        ~CiscoVoiceDnisMib();

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

        class Cvdnismappingtable; //type: CiscoVoiceDnisMib::Cvdnismappingtable
        class Cvdnisnodetable; //type: CiscoVoiceDnisMib::Cvdnisnodetable

        std::shared_ptr<CISCO_VOICE_DNIS_MIB::CiscoVoiceDnisMib::Cvdnismappingtable> cvdnismappingtable;
        std::shared_ptr<CISCO_VOICE_DNIS_MIB::CiscoVoiceDnisMib::Cvdnisnodetable> cvdnisnodetable;
        
}; // CiscoVoiceDnisMib


class CiscoVoiceDnisMib::Cvdnismappingtable : public ydk::Entity
{
    public:
        Cvdnismappingtable();
        ~Cvdnismappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvdnismappingentry; //type: CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry

        std::vector<std::shared_ptr<CISCO_VOICE_DNIS_MIB::CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry> > cvdnismappingentry;
        
}; // CiscoVoiceDnisMib::Cvdnismappingtable


class CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry : public ydk::Entity
{
    public:
        Cvdnismappingentry();
        ~Cvdnismappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvdnismappingname; //type: string
        ydk::YLeaf cvdnismappingurl; //type: string
        ydk::YLeaf cvdnismappingrefresh; //type: Cvdnismappingrefresh
        ydk::YLeaf cvdnismappingurlaccesserror; //type: string
        ydk::YLeaf cvdnismappingstatus; //type: Rowstatus
        class Cvdnismappingrefresh;

}; // CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry


class CiscoVoiceDnisMib::Cvdnisnodetable : public ydk::Entity
{
    public:
        Cvdnisnodetable();
        ~Cvdnisnodetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvdnisnodeentry; //type: CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry

        std::vector<std::shared_ptr<CISCO_VOICE_DNIS_MIB::CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry> > cvdnisnodeentry;
        
}; // CiscoVoiceDnisMib::Cvdnisnodetable


class CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry : public ydk::Entity
{
    public:
        Cvdnisnodeentry();
        ~Cvdnisnodeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to CISCO_VOICE_DNIS_MIB::CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::cvdnismappingname)
        ydk::YLeaf cvdnismappingname;
        ydk::YLeaf cvdnisnumber; //type: string
        ydk::YLeaf cvdnisnodeurl; //type: string
        ydk::YLeaf cvdnisnodemodifiable; //type: boolean
        ydk::YLeaf cvdnisnodestatus; //type: Rowstatus

}; // CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry

class CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::Cvdnismappingrefresh : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf refresh;

};


}
}

#endif /* _CISCO_VOICE_DNIS_MIB_ */

