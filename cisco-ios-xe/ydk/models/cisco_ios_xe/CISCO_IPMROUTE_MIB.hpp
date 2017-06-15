#ifndef _CISCO_IPMROUTE_MIB_
#define _CISCO_IPMROUTE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IPMROUTE_MIB {

class CiscoIpmrouteMib : public Entity
{
    public:
        CiscoIpmrouteMib();
        ~CiscoIpmrouteMib();

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

        class Ciscoipmroute; //type: CiscoIpmrouteMib::Ciscoipmroute
        class Ciscoipmrouteheartbeattable; //type: CiscoIpmrouteMib::Ciscoipmrouteheartbeattable

        std::shared_ptr<CISCO_IPMROUTE_MIB::CiscoIpmrouteMib::Ciscoipmroute> ciscoipmroute_;
        std::shared_ptr<CISCO_IPMROUTE_MIB::CiscoIpmrouteMib::Ciscoipmrouteheartbeattable> ciscoipmrouteheartbeattable_;
        
}; // CiscoIpmrouteMib


class CiscoIpmrouteMib::Ciscoipmroute : public Entity
{
    public:
        Ciscoipmroute();
        ~Ciscoipmroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoipmroutenumberofentries; //type: uint32

}; // CiscoIpmrouteMib::Ciscoipmroute


class CiscoIpmrouteMib::Ciscoipmrouteheartbeattable : public Entity
{
    public:
        Ciscoipmrouteheartbeattable();
        ~Ciscoipmrouteheartbeattable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoipmrouteheartbeatentry; //type: CiscoIpmrouteMib::Ciscoipmrouteheartbeattable::Ciscoipmrouteheartbeatentry

        std::vector<std::shared_ptr<CISCO_IPMROUTE_MIB::CiscoIpmrouteMib::Ciscoipmrouteheartbeattable::Ciscoipmrouteheartbeatentry> > ciscoipmrouteheartbeatentry_;
        
}; // CiscoIpmrouteMib::Ciscoipmrouteheartbeattable


class CiscoIpmrouteMib::Ciscoipmrouteheartbeattable::Ciscoipmrouteheartbeatentry : public Entity
{
    public:
        Ciscoipmrouteheartbeatentry();
        ~Ciscoipmrouteheartbeatentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoipmrouteheartbeatgroupaddr; //type: string
        YLeaf ciscoipmrouteheartbeatsourceaddr; //type: string
        YLeaf ciscoipmrouteheartbeatinterval; //type: int32
        YLeaf ciscoipmrouteheartbeatwindowsize; //type: int32
        YLeaf ciscoipmrouteheartbeatcount; //type: uint32
        YLeaf ciscoipmrouteheartbeatminimum; //type: int32
        YLeaf ciscoipmrouteheartbeatalerttime; //type: uint32
        YLeaf ciscoipmrouteheartbeatstatus; //type: RowstatusEnum

}; // CiscoIpmrouteMib::Ciscoipmrouteheartbeattable::Ciscoipmrouteheartbeatentry


}
}

#endif /* _CISCO_IPMROUTE_MIB_ */

