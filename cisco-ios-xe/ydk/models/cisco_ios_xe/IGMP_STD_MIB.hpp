#ifndef _IGMP_STD_MIB_
#define _IGMP_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace IGMP_STD_MIB {

class IgmpStdMib : public Entity
{
    public:
        IgmpStdMib();
        ~IgmpStdMib();

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

        class Igmpinterfacetable; //type: IgmpStdMib::Igmpinterfacetable
        class Igmpcachetable; //type: IgmpStdMib::Igmpcachetable

        std::shared_ptr<IGMP_STD_MIB::IgmpStdMib::Igmpcachetable> igmpcachetable;
        std::shared_ptr<IGMP_STD_MIB::IgmpStdMib::Igmpinterfacetable> igmpinterfacetable;
        
}; // IgmpStdMib


class IgmpStdMib::Igmpinterfacetable : public Entity
{
    public:
        Igmpinterfacetable();
        ~Igmpinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Igmpinterfaceentry; //type: IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry

        std::vector<std::shared_ptr<IGMP_STD_MIB::IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry> > igmpinterfaceentry;
        
}; // IgmpStdMib::Igmpinterfacetable


class IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry : public Entity
{
    public:
        Igmpinterfaceentry();
        ~Igmpinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf igmpinterfaceifindex; //type: int32
        YLeaf igmpinterfacequeryinterval; //type: uint32
        YLeaf igmpinterfacestatus; //type: RowstatusEnum
        YLeaf igmpinterfaceversion; //type: uint32
        YLeaf igmpinterfacequerier; //type: string
        YLeaf igmpinterfacequerymaxresponsetime; //type: uint32
        YLeaf igmpinterfacequerieruptime; //type: uint32
        YLeaf igmpinterfacequerierexpirytime; //type: uint32
        YLeaf igmpinterfaceversion1queriertimer; //type: uint32
        YLeaf igmpinterfacewrongversionqueries; //type: uint32
        YLeaf igmpinterfacejoins; //type: uint32
        YLeaf igmpinterfaceproxyifindex; //type: int32
        YLeaf igmpinterfacegroups; //type: uint32
        YLeaf igmpinterfacerobustness; //type: uint32
        YLeaf igmpinterfacelastmembqueryintvl; //type: uint32

}; // IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry


class IgmpStdMib::Igmpcachetable : public Entity
{
    public:
        Igmpcachetable();
        ~Igmpcachetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Igmpcacheentry; //type: IgmpStdMib::Igmpcachetable::Igmpcacheentry

        std::vector<std::shared_ptr<IGMP_STD_MIB::IgmpStdMib::Igmpcachetable::Igmpcacheentry> > igmpcacheentry;
        
}; // IgmpStdMib::Igmpcachetable


class IgmpStdMib::Igmpcachetable::Igmpcacheentry : public Entity
{
    public:
        Igmpcacheentry();
        ~Igmpcacheentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf igmpcacheaddress; //type: string
        YLeaf igmpcacheifindex; //type: int32
        YLeaf igmpcacheself; //type: boolean
        YLeaf igmpcachelastreporter; //type: string
        YLeaf igmpcacheuptime; //type: uint32
        YLeaf igmpcacheexpirytime; //type: uint32
        YLeaf igmpcachestatus; //type: RowstatusEnum
        YLeaf igmpcacheversion1hosttimer; //type: uint32

}; // IgmpStdMib::Igmpcachetable::Igmpcacheentry


}
}

#endif /* _IGMP_STD_MIB_ */

