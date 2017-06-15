#ifndef _CISCO_VOICE_DNIS_MIB_
#define _CISCO_VOICE_DNIS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_VOICE_DNIS_MIB {

class CiscoVoiceDnisMib : public Entity
{
    public:
        CiscoVoiceDnisMib();
        ~CiscoVoiceDnisMib();

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

        class Cvdnismappingtable; //type: CiscoVoiceDnisMib::Cvdnismappingtable
        class Cvdnisnodetable; //type: CiscoVoiceDnisMib::Cvdnisnodetable

        std::shared_ptr<CISCO_VOICE_DNIS_MIB::CiscoVoiceDnisMib::Cvdnismappingtable> cvdnismappingtable_;
        std::shared_ptr<CISCO_VOICE_DNIS_MIB::CiscoVoiceDnisMib::Cvdnisnodetable> cvdnisnodetable_;
        
}; // CiscoVoiceDnisMib


class CiscoVoiceDnisMib::Cvdnismappingtable : public Entity
{
    public:
        Cvdnismappingtable();
        ~Cvdnismappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvdnismappingentry; //type: CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry

        std::vector<std::shared_ptr<CISCO_VOICE_DNIS_MIB::CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry> > cvdnismappingentry_;
        
}; // CiscoVoiceDnisMib::Cvdnismappingtable


class CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry : public Entity
{
    public:
        Cvdnismappingentry();
        ~Cvdnismappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvdnismappingname; //type: string
        YLeaf cvdnismappingurl; //type: string
        YLeaf cvdnismappingrefresh; //type: CvdnismappingrefreshEnum
        YLeaf cvdnismappingurlaccesserror; //type: string
        YLeaf cvdnismappingstatus; //type: RowstatusEnum
        class CvdnismappingrefreshEnum;

}; // CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry


class CiscoVoiceDnisMib::Cvdnisnodetable : public Entity
{
    public:
        Cvdnisnodetable();
        ~Cvdnisnodetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvdnisnodeentry; //type: CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry

        std::vector<std::shared_ptr<CISCO_VOICE_DNIS_MIB::CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry> > cvdnisnodeentry_;
        
}; // CiscoVoiceDnisMib::Cvdnisnodetable


class CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry : public Entity
{
    public:
        Cvdnisnodeentry();
        ~Cvdnisnodeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to CISCO_VOICE_DNIS_MIB::CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::cvdnismappingname)
        YLeaf cvdnismappingname;
        YLeaf cvdnisnumber; //type: string
        YLeaf cvdnisnodeurl; //type: string
        YLeaf cvdnisnodemodifiable; //type: boolean
        YLeaf cvdnisnodestatus; //type: RowstatusEnum

}; // CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry

class CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::CvdnismappingrefreshEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf refresh;

};


}
}

#endif /* _CISCO_VOICE_DNIS_MIB_ */

