#ifndef _IGMP_STD_MIB_
#define _IGMP_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace IGMP_STD_MIB {

class IGMPSTDMIB : public ydk::Entity
{
    public:
        IGMPSTDMIB();
        ~IGMPSTDMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class IgmpInterfaceTable; //type: IGMPSTDMIB::IgmpInterfaceTable
        class IgmpCacheTable; //type: IGMPSTDMIB::IgmpCacheTable

        std::shared_ptr<cisco_ios_xe::IGMP_STD_MIB::IGMPSTDMIB::IgmpInterfaceTable> igmpinterfacetable;
        std::shared_ptr<cisco_ios_xe::IGMP_STD_MIB::IGMPSTDMIB::IgmpCacheTable> igmpcachetable;
        
}; // IGMPSTDMIB


class IGMPSTDMIB::IgmpInterfaceTable : public ydk::Entity
{
    public:
        IgmpInterfaceTable();
        ~IgmpInterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IgmpInterfaceEntry; //type: IGMPSTDMIB::IgmpInterfaceTable::IgmpInterfaceEntry

        ydk::YList igmpinterfaceentry;
        
}; // IGMPSTDMIB::IgmpInterfaceTable


class IGMPSTDMIB::IgmpInterfaceTable::IgmpInterfaceEntry : public ydk::Entity
{
    public:
        IgmpInterfaceEntry();
        ~IgmpInterfaceEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf igmpinterfaceifindex; //type: int32
        ydk::YLeaf igmpinterfacequeryinterval; //type: uint32
        ydk::YLeaf igmpinterfacestatus; //type: RowStatus
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

}; // IGMPSTDMIB::IgmpInterfaceTable::IgmpInterfaceEntry


class IGMPSTDMIB::IgmpCacheTable : public ydk::Entity
{
    public:
        IgmpCacheTable();
        ~IgmpCacheTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IgmpCacheEntry; //type: IGMPSTDMIB::IgmpCacheTable::IgmpCacheEntry

        ydk::YList igmpcacheentry;
        
}; // IGMPSTDMIB::IgmpCacheTable


class IGMPSTDMIB::IgmpCacheTable::IgmpCacheEntry : public ydk::Entity
{
    public:
        IgmpCacheEntry();
        ~IgmpCacheEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf igmpcacheaddress; //type: string
        ydk::YLeaf igmpcacheifindex; //type: int32
        ydk::YLeaf igmpcacheself; //type: boolean
        ydk::YLeaf igmpcachelastreporter; //type: string
        ydk::YLeaf igmpcacheuptime; //type: uint32
        ydk::YLeaf igmpcacheexpirytime; //type: uint32
        ydk::YLeaf igmpcachestatus; //type: RowStatus
        ydk::YLeaf igmpcacheversion1hosttimer; //type: uint32

}; // IGMPSTDMIB::IgmpCacheTable::IgmpCacheEntry


}
}

#endif /* _IGMP_STD_MIB_ */

