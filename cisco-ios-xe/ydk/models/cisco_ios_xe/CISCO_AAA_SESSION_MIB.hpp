#ifndef _CISCO_AAA_SESSION_MIB_
#define _CISCO_AAA_SESSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_AAA_SESSION_MIB {

class CiscoAaaSessionMib : public Entity
{
    public:
        CiscoAaaSessionMib();
        ~CiscoAaaSessionMib();

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

        class Casnactive; //type: CiscoAaaSessionMib::Casnactive
        class Casngeneral; //type: CiscoAaaSessionMib::Casngeneral
        class Casnactivetable; //type: CiscoAaaSessionMib::Casnactivetable

        std::shared_ptr<CISCO_AAA_SESSION_MIB::CiscoAaaSessionMib::Casnactive> casnactive_;
        std::shared_ptr<CISCO_AAA_SESSION_MIB::CiscoAaaSessionMib::Casnactivetable> casnactivetable_;
        std::shared_ptr<CISCO_AAA_SESSION_MIB::CiscoAaaSessionMib::Casngeneral> casngeneral_;
        
}; // CiscoAaaSessionMib


class CiscoAaaSessionMib::Casnactive : public Entity
{
    public:
        Casnactive();
        ~Casnactive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf casnactivetableentries; //type: uint32
        YLeaf casnactivetablehighwatermark; //type: uint32

}; // CiscoAaaSessionMib::Casnactive


class CiscoAaaSessionMib::Casngeneral : public Entity
{
    public:
        Casngeneral();
        ~Casngeneral();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf casntotalsessions; //type: uint32
        YLeaf casndisconnectedsessions; //type: uint32

}; // CiscoAaaSessionMib::Casngeneral


class CiscoAaaSessionMib::Casnactivetable : public Entity
{
    public:
        Casnactivetable();
        ~Casnactivetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Casnactiveentry; //type: CiscoAaaSessionMib::Casnactivetable::Casnactiveentry

        std::vector<std::shared_ptr<CISCO_AAA_SESSION_MIB::CiscoAaaSessionMib::Casnactivetable::Casnactiveentry> > casnactiveentry_;
        
}; // CiscoAaaSessionMib::Casnactivetable


class CiscoAaaSessionMib::Casnactivetable::Casnactiveentry : public Entity
{
    public:
        Casnactiveentry();
        ~Casnactiveentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf casnsessionid; //type: uint32
        YLeaf casnuserid; //type: string
        YLeaf casnipaddr; //type: string
        YLeaf casnidletime; //type: uint32
        YLeaf casndisconnect; //type: boolean
        YLeaf casncalltrackerid; //type: uint32
        YLeaf casnnasport; //type: string
        YLeaf casnvaiifindex; //type: int32

}; // CiscoAaaSessionMib::Casnactivetable::Casnactiveentry


}
}

#endif /* _CISCO_AAA_SESSION_MIB_ */

