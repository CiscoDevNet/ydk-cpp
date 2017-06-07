#ifndef _CISCO_ETHERLIKE_EXT_MIB_
#define _CISCO_ETHERLIKE_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_ETHERLIKE_EXT_MIB {

class CiscoEtherlikeExtMib : public Entity
{
    public:
        CiscoEtherlikeExtMib();
        ~CiscoEtherlikeExtMib();

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

        class Ceedot3Pauseexttable; //type: CiscoEtherlikeExtMib::Ceedot3Pauseexttable
        class Ceesubinterfacetable; //type: CiscoEtherlikeExtMib::Ceesubinterfacetable

        std::shared_ptr<CISCO_ETHERLIKE_EXT_MIB::CiscoEtherlikeExtMib::Ceedot3Pauseexttable> ceedot3pauseexttable;
        std::shared_ptr<CISCO_ETHERLIKE_EXT_MIB::CiscoEtherlikeExtMib::Ceesubinterfacetable> ceesubinterfacetable;
        
}; // CiscoEtherlikeExtMib


class CiscoEtherlikeExtMib::Ceedot3Pauseexttable : public Entity
{
    public:
        Ceedot3Pauseexttable();
        ~Ceedot3Pauseexttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceedot3Pauseextentry; //type: CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry

        std::vector<std::shared_ptr<CISCO_ETHERLIKE_EXT_MIB::CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry> > ceedot3pauseextentry;
        
}; // CiscoEtherlikeExtMib::Ceedot3Pauseexttable


class CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry : public Entity
{
    public:
        Ceedot3Pauseextentry();
        ~Ceedot3Pauseextentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to EtherLike_MIB::EtherlikeMib::Dot3Statstable::Dot3Statsentry::dot3statsindex)
        YLeaf dot3statsindex;
        YLeaf ceedot3pauseextadminmode; //type: Ceedot3Pauseextadminmode
        YLeaf ceedot3pauseextopermode; //type: Ceedot3Pauseextopermode

}; // CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry


class CiscoEtherlikeExtMib::Ceesubinterfacetable : public Entity
{
    public:
        Ceesubinterfacetable();
        ~Ceesubinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ceesubinterfaceentry; //type: CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry

        std::vector<std::shared_ptr<CISCO_ETHERLIKE_EXT_MIB::CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry> > ceesubinterfaceentry;
        
}; // CiscoEtherlikeExtMib::Ceesubinterfacetable


class CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry : public Entity
{
    public:
        Ceesubinterfaceentry();
        ~Ceesubinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf ceesubinterfacecount; //type: uint32

}; // CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry


}
}

#endif /* _CISCO_ETHERLIKE_EXT_MIB_ */

