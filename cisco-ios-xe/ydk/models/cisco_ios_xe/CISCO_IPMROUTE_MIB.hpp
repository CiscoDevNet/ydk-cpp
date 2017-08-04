#ifndef _CISCO_IPMROUTE_MIB_
#define _CISCO_IPMROUTE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IPMROUTE_MIB {

class CiscoIpmrouteMib : public ydk::Entity
{
    public:
        CiscoIpmrouteMib();
        ~CiscoIpmrouteMib();

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

        class Ciscoipmroute; //type: CiscoIpmrouteMib::Ciscoipmroute
        class Ciscoipmrouteheartbeattable; //type: CiscoIpmrouteMib::Ciscoipmrouteheartbeattable

        std::shared_ptr<CISCO_IPMROUTE_MIB::CiscoIpmrouteMib::Ciscoipmroute> ciscoipmroute;
        std::shared_ptr<CISCO_IPMROUTE_MIB::CiscoIpmrouteMib::Ciscoipmrouteheartbeattable> ciscoipmrouteheartbeattable;
        
}; // CiscoIpmrouteMib


class CiscoIpmrouteMib::Ciscoipmroute : public ydk::Entity
{
    public:
        Ciscoipmroute();
        ~Ciscoipmroute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoipmroutenumberofentries; //type: uint32

}; // CiscoIpmrouteMib::Ciscoipmroute


class CiscoIpmrouteMib::Ciscoipmrouteheartbeattable : public ydk::Entity
{
    public:
        Ciscoipmrouteheartbeattable();
        ~Ciscoipmrouteheartbeattable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoipmrouteheartbeatentry; //type: CiscoIpmrouteMib::Ciscoipmrouteheartbeattable::Ciscoipmrouteheartbeatentry

        std::vector<std::shared_ptr<CISCO_IPMROUTE_MIB::CiscoIpmrouteMib::Ciscoipmrouteheartbeattable::Ciscoipmrouteheartbeatentry> > ciscoipmrouteheartbeatentry;
        
}; // CiscoIpmrouteMib::Ciscoipmrouteheartbeattable


class CiscoIpmrouteMib::Ciscoipmrouteheartbeattable::Ciscoipmrouteheartbeatentry : public ydk::Entity
{
    public:
        Ciscoipmrouteheartbeatentry();
        ~Ciscoipmrouteheartbeatentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoipmrouteheartbeatgroupaddr; //type: string
        ydk::YLeaf ciscoipmrouteheartbeatsourceaddr; //type: string
        ydk::YLeaf ciscoipmrouteheartbeatinterval; //type: int32
        ydk::YLeaf ciscoipmrouteheartbeatwindowsize; //type: int32
        ydk::YLeaf ciscoipmrouteheartbeatcount; //type: uint32
        ydk::YLeaf ciscoipmrouteheartbeatminimum; //type: int32
        ydk::YLeaf ciscoipmrouteheartbeatalerttime; //type: uint32
        ydk::YLeaf ciscoipmrouteheartbeatstatus; //type: Rowstatus

}; // CiscoIpmrouteMib::Ciscoipmrouteheartbeattable::Ciscoipmrouteheartbeatentry


}
}

#endif /* _CISCO_IPMROUTE_MIB_ */
