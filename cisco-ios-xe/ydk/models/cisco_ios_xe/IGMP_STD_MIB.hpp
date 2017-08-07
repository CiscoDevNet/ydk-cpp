#ifndef _IGMP_STD_MIB_
#define _IGMP_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace IGMP_STD_MIB {

class IgmpStdMib : public ydk::Entity
{
    public:
        IgmpStdMib();
        ~IgmpStdMib();

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

        class Igmpinterfacetable; //type: IgmpStdMib::Igmpinterfacetable
        class Igmpcachetable; //type: IgmpStdMib::Igmpcachetable

        std::shared_ptr<IGMP_STD_MIB::IgmpStdMib::Igmpcachetable> igmpcachetable;
        std::shared_ptr<IGMP_STD_MIB::IgmpStdMib::Igmpinterfacetable> igmpinterfacetable;
        
}; // IgmpStdMib


class IgmpStdMib::Igmpinterfacetable : public ydk::Entity
{
    public:
        Igmpinterfacetable();
        ~Igmpinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Igmpinterfaceentry; //type: IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry

        std::vector<std::shared_ptr<IGMP_STD_MIB::IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry> > igmpinterfaceentry;
        
}; // IgmpStdMib::Igmpinterfacetable


class IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry : public ydk::Entity
{
    public:
        Igmpinterfaceentry();
        ~Igmpinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igmpinterfaceifindex; //type: int32
        ydk::YLeaf igmpinterfacequeryinterval; //type: uint32
        ydk::YLeaf igmpinterfacestatus; //type: Rowstatus
        ydk::YLeaf igmpinterfaceversion; //type: uint32
        ydk::YLeaf igmpinterfacequerier; //type: string
        ydk::YLeaf igmpinterfacequerymaxresponsetime; //type: uint32
        ydk::YLeaf igmpinterfacequerieruptime; //type: uint32
        ydk::YLeaf igmpinterfacequerierexpirytime; //type: uint32
        ydk::YLeaf igmpinterfaceversion1queriertimer; //type: uint32
        ydk::YLeaf igmpinterfacewrongversionqueries; //type: uint32
        ydk::YLeaf igmpinterfacejoins; //type: uint32
        ydk::YLeaf igmpinterfaceproxyifindex; //type: int32
        ydk::YLeaf igmpinterfacegroups; //type: uint32
        ydk::YLeaf igmpinterfacerobustness; //type: uint32
        ydk::YLeaf igmpinterfacelastmembqueryintvl; //type: uint32

}; // IgmpStdMib::Igmpinterfacetable::Igmpinterfaceentry


class IgmpStdMib::Igmpcachetable : public ydk::Entity
{
    public:
        Igmpcachetable();
        ~Igmpcachetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Igmpcacheentry; //type: IgmpStdMib::Igmpcachetable::Igmpcacheentry

        std::vector<std::shared_ptr<IGMP_STD_MIB::IgmpStdMib::Igmpcachetable::Igmpcacheentry> > igmpcacheentry;
        
}; // IgmpStdMib::Igmpcachetable


class IgmpStdMib::Igmpcachetable::Igmpcacheentry : public ydk::Entity
{
    public:
        Igmpcacheentry();
        ~Igmpcacheentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igmpcacheaddress; //type: string
        ydk::YLeaf igmpcacheifindex; //type: int32
        ydk::YLeaf igmpcacheself; //type: boolean
        ydk::YLeaf igmpcachelastreporter; //type: string
        ydk::YLeaf igmpcacheuptime; //type: uint32
        ydk::YLeaf igmpcacheexpirytime; //type: uint32
        ydk::YLeaf igmpcachestatus; //type: Rowstatus
        ydk::YLeaf igmpcacheversion1hosttimer; //type: uint32

}; // IgmpStdMib::Igmpcachetable::Igmpcacheentry


}
}

#endif /* _IGMP_STD_MIB_ */

