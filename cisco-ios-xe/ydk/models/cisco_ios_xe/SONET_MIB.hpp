#ifndef _SONET_MIB_
#define _SONET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace SONET_MIB {

class SONETMIB : public ydk::Entity
{
    public:
        SONETMIB();
        ~SONETMIB();

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

        class Sonetmedium; //type: SONETMIB::Sonetmedium
        class Sonetmediumtable; //type: SONETMIB::Sonetmediumtable
        class Sonetsectioncurrenttable; //type: SONETMIB::Sonetsectioncurrenttable
        class Sonetsectionintervaltable; //type: SONETMIB::Sonetsectionintervaltable
        class Sonetlinecurrenttable; //type: SONETMIB::Sonetlinecurrenttable
        class Sonetlineintervaltable; //type: SONETMIB::Sonetlineintervaltable
        class Sonetfarendlinecurrenttable; //type: SONETMIB::Sonetfarendlinecurrenttable
        class Sonetfarendlineintervaltable; //type: SONETMIB::Sonetfarendlineintervaltable
        class Sonetpathcurrenttable; //type: SONETMIB::Sonetpathcurrenttable
        class Sonetpathintervaltable; //type: SONETMIB::Sonetpathintervaltable
        class Sonetfarendpathcurrenttable; //type: SONETMIB::Sonetfarendpathcurrenttable
        class Sonetfarendpathintervaltable; //type: SONETMIB::Sonetfarendpathintervaltable
        class Sonetvtcurrenttable; //type: SONETMIB::Sonetvtcurrenttable
        class Sonetvtintervaltable; //type: SONETMIB::Sonetvtintervaltable
        class Sonetfarendvtcurrenttable; //type: SONETMIB::Sonetfarendvtcurrenttable
        class Sonetfarendvtintervaltable; //type: SONETMIB::Sonetfarendvtintervaltable

        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetfarendlinecurrenttable> sonetfarendlinecurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetfarendlineintervaltable> sonetfarendlineintervaltable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetfarendpathcurrenttable> sonetfarendpathcurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetfarendpathintervaltable> sonetfarendpathintervaltable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetfarendvtcurrenttable> sonetfarendvtcurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetfarendvtintervaltable> sonetfarendvtintervaltable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetlinecurrenttable> sonetlinecurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetlineintervaltable> sonetlineintervaltable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetmedium> sonetmedium;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetmediumtable> sonetmediumtable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetpathcurrenttable> sonetpathcurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetpathintervaltable> sonetpathintervaltable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetsectioncurrenttable> sonetsectioncurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetsectionintervaltable> sonetsectionintervaltable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetvtcurrenttable> sonetvtcurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetvtintervaltable> sonetvtintervaltable;
        
}; // SONETMIB


class SONETMIB::Sonetfarendlinecurrenttable : public ydk::Entity
{
    public:
        Sonetfarendlinecurrenttable();
        ~Sonetfarendlinecurrenttable();

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

        class Sonetfarendlinecurrententry; //type: SONETMIB::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry> > sonetfarendlinecurrententry;
        
}; // SONETMIB::Sonetfarendlinecurrenttable


class SONETMIB::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry : public ydk::Entity
{
    public:
        Sonetfarendlinecurrententry();
        ~Sonetfarendlinecurrententry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendlinecurrentess; //type: uint32
        ydk::YLeaf sonetfarendlinecurrentsess; //type: uint32
        ydk::YLeaf sonetfarendlinecurrentcvs; //type: uint32
        ydk::YLeaf sonetfarendlinecurrentuass; //type: uint32

}; // SONETMIB::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry


class SONETMIB::Sonetfarendlineintervaltable : public ydk::Entity
{
    public:
        Sonetfarendlineintervaltable();
        ~Sonetfarendlineintervaltable();

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

        class Sonetfarendlineintervalentry; //type: SONETMIB::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry> > sonetfarendlineintervalentry;
        
}; // SONETMIB::Sonetfarendlineintervaltable


class SONETMIB::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry : public ydk::Entity
{
    public:
        Sonetfarendlineintervalentry();
        ~Sonetfarendlineintervalentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendlineintervalnumber; //type: int32
        ydk::YLeaf sonetfarendlineintervaless; //type: uint32
        ydk::YLeaf sonetfarendlineintervalsess; //type: uint32
        ydk::YLeaf sonetfarendlineintervalcvs; //type: uint32
        ydk::YLeaf sonetfarendlineintervaluass; //type: uint32
        ydk::YLeaf sonetfarendlineintervalvaliddata; //type: boolean

}; // SONETMIB::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry


class SONETMIB::Sonetfarendpathcurrenttable : public ydk::Entity
{
    public:
        Sonetfarendpathcurrenttable();
        ~Sonetfarendpathcurrenttable();

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

        class Sonetfarendpathcurrententry; //type: SONETMIB::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry> > sonetfarendpathcurrententry;
        
}; // SONETMIB::Sonetfarendpathcurrenttable


class SONETMIB::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry : public ydk::Entity
{
    public:
        Sonetfarendpathcurrententry();
        ~Sonetfarendpathcurrententry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendpathcurrentess; //type: uint32
        ydk::YLeaf sonetfarendpathcurrentsess; //type: uint32
        ydk::YLeaf sonetfarendpathcurrentcvs; //type: uint32
        ydk::YLeaf sonetfarendpathcurrentuass; //type: uint32

}; // SONETMIB::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry


class SONETMIB::Sonetfarendpathintervaltable : public ydk::Entity
{
    public:
        Sonetfarendpathintervaltable();
        ~Sonetfarendpathintervaltable();

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

        class Sonetfarendpathintervalentry; //type: SONETMIB::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry> > sonetfarendpathintervalentry;
        
}; // SONETMIB::Sonetfarendpathintervaltable


class SONETMIB::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry : public ydk::Entity
{
    public:
        Sonetfarendpathintervalentry();
        ~Sonetfarendpathintervalentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendpathintervalnumber; //type: int32
        ydk::YLeaf sonetfarendpathintervaless; //type: uint32
        ydk::YLeaf sonetfarendpathintervalsess; //type: uint32
        ydk::YLeaf sonetfarendpathintervalcvs; //type: uint32
        ydk::YLeaf sonetfarendpathintervaluass; //type: uint32
        ydk::YLeaf sonetfarendpathintervalvaliddata; //type: boolean

}; // SONETMIB::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry


class SONETMIB::Sonetfarendvtcurrenttable : public ydk::Entity
{
    public:
        Sonetfarendvtcurrenttable();
        ~Sonetfarendvtcurrenttable();

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

        class Sonetfarendvtcurrententry; //type: SONETMIB::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry> > sonetfarendvtcurrententry;
        
}; // SONETMIB::Sonetfarendvtcurrenttable


class SONETMIB::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry : public ydk::Entity
{
    public:
        Sonetfarendvtcurrententry();
        ~Sonetfarendvtcurrententry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendvtcurrentess; //type: uint32
        ydk::YLeaf sonetfarendvtcurrentsess; //type: uint32
        ydk::YLeaf sonetfarendvtcurrentcvs; //type: uint32
        ydk::YLeaf sonetfarendvtcurrentuass; //type: uint32

}; // SONETMIB::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry


class SONETMIB::Sonetfarendvtintervaltable : public ydk::Entity
{
    public:
        Sonetfarendvtintervaltable();
        ~Sonetfarendvtintervaltable();

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

        class Sonetfarendvtintervalentry; //type: SONETMIB::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry> > sonetfarendvtintervalentry;
        
}; // SONETMIB::Sonetfarendvtintervaltable


class SONETMIB::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry : public ydk::Entity
{
    public:
        Sonetfarendvtintervalentry();
        ~Sonetfarendvtintervalentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendvtintervalnumber; //type: int32
        ydk::YLeaf sonetfarendvtintervaless; //type: uint32
        ydk::YLeaf sonetfarendvtintervalsess; //type: uint32
        ydk::YLeaf sonetfarendvtintervalcvs; //type: uint32
        ydk::YLeaf sonetfarendvtintervaluass; //type: uint32
        ydk::YLeaf sonetfarendvtintervalvaliddata; //type: boolean

}; // SONETMIB::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry


class SONETMIB::Sonetlinecurrenttable : public ydk::Entity
{
    public:
        Sonetlinecurrenttable();
        ~Sonetlinecurrenttable();

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

        class Sonetlinecurrententry; //type: SONETMIB::Sonetlinecurrenttable::Sonetlinecurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetlinecurrenttable::Sonetlinecurrententry> > sonetlinecurrententry;
        
}; // SONETMIB::Sonetlinecurrenttable


class SONETMIB::Sonetlinecurrenttable::Sonetlinecurrententry : public ydk::Entity
{
    public:
        Sonetlinecurrententry();
        ~Sonetlinecurrententry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetlinecurrentstatus; //type: int32
        ydk::YLeaf sonetlinecurrentess; //type: uint32
        ydk::YLeaf sonetlinecurrentsess; //type: uint32
        ydk::YLeaf sonetlinecurrentcvs; //type: uint32
        ydk::YLeaf sonetlinecurrentuass; //type: uint32

}; // SONETMIB::Sonetlinecurrenttable::Sonetlinecurrententry


class SONETMIB::Sonetlineintervaltable : public ydk::Entity
{
    public:
        Sonetlineintervaltable();
        ~Sonetlineintervaltable();

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

        class Sonetlineintervalentry; //type: SONETMIB::Sonetlineintervaltable::Sonetlineintervalentry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetlineintervaltable::Sonetlineintervalentry> > sonetlineintervalentry;
        
}; // SONETMIB::Sonetlineintervaltable


class SONETMIB::Sonetlineintervaltable::Sonetlineintervalentry : public ydk::Entity
{
    public:
        Sonetlineintervalentry();
        ~Sonetlineintervalentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetlineintervalnumber; //type: int32
        ydk::YLeaf sonetlineintervaless; //type: uint32
        ydk::YLeaf sonetlineintervalsess; //type: uint32
        ydk::YLeaf sonetlineintervalcvs; //type: uint32
        ydk::YLeaf sonetlineintervaluass; //type: uint32
        ydk::YLeaf sonetlineintervalvaliddata; //type: boolean

}; // SONETMIB::Sonetlineintervaltable::Sonetlineintervalentry


class SONETMIB::Sonetmedium : public ydk::Entity
{
    public:
        Sonetmedium();
        ~Sonetmedium();

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

        ydk::YLeaf sonetsesthresholdset; //type: Sonetsesthresholdset
        class Sonetsesthresholdset;

}; // SONETMIB::Sonetmedium


class SONETMIB::Sonetmediumtable : public ydk::Entity
{
    public:
        Sonetmediumtable();
        ~Sonetmediumtable();

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

        class Sonetmediumentry; //type: SONETMIB::Sonetmediumtable::Sonetmediumentry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetmediumtable::Sonetmediumentry> > sonetmediumentry;
        
}; // SONETMIB::Sonetmediumtable


class SONETMIB::Sonetmediumtable::Sonetmediumentry : public ydk::Entity
{
    public:
        Sonetmediumentry();
        ~Sonetmediumentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetmediumtype; //type: Sonetmediumtype
        ydk::YLeaf sonetmediumtimeelapsed; //type: int32
        ydk::YLeaf sonetmediumvalidintervals; //type: int32
        ydk::YLeaf sonetmediumlinecoding; //type: Sonetmediumlinecoding
        ydk::YLeaf sonetmediumlinetype; //type: Sonetmediumlinetype
        ydk::YLeaf sonetmediumcircuitidentifier; //type: string
        ydk::YLeaf sonetmediuminvalidintervals; //type: int32
        ydk::YLeaf sonetmediumloopbackconfig; //type: Sonetmediumloopbackconfig
        class Sonetmediumtype;
        class Sonetmediumlinecoding;
        class Sonetmediumlinetype;

}; // SONETMIB::Sonetmediumtable::Sonetmediumentry


class SONETMIB::Sonetpathcurrenttable : public ydk::Entity
{
    public:
        Sonetpathcurrenttable();
        ~Sonetpathcurrenttable();

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

        class Sonetpathcurrententry; //type: SONETMIB::Sonetpathcurrenttable::Sonetpathcurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetpathcurrenttable::Sonetpathcurrententry> > sonetpathcurrententry;
        
}; // SONETMIB::Sonetpathcurrenttable


class SONETMIB::Sonetpathcurrenttable::Sonetpathcurrententry : public ydk::Entity
{
    public:
        Sonetpathcurrententry();
        ~Sonetpathcurrententry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetpathcurrentwidth; //type: Sonetpathcurrentwidth
        ydk::YLeaf sonetpathcurrentstatus; //type: int32
        ydk::YLeaf sonetpathcurrentess; //type: uint32
        ydk::YLeaf sonetpathcurrentsess; //type: uint32
        ydk::YLeaf sonetpathcurrentcvs; //type: uint32
        ydk::YLeaf sonetpathcurrentuass; //type: uint32
        ydk::YLeaf cspsonetpathpayload; //type: Cspsonetpathpayload
        ydk::YLeaf csptributarymappingtype; //type: Csptributarymappingtype
        ydk::YLeaf cspsignallingtransportmode; //type: Cspsignallingtransportmode
        ydk::YLeaf csptributarygroupingtype; //type: Csptributarygroupingtype
        class Sonetpathcurrentwidth;
        class Cspsonetpathpayload;
        class Csptributarymappingtype;
        class Cspsignallingtransportmode;
        class Csptributarygroupingtype;

}; // SONETMIB::Sonetpathcurrenttable::Sonetpathcurrententry


class SONETMIB::Sonetpathintervaltable : public ydk::Entity
{
    public:
        Sonetpathintervaltable();
        ~Sonetpathintervaltable();

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

        class Sonetpathintervalentry; //type: SONETMIB::Sonetpathintervaltable::Sonetpathintervalentry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetpathintervaltable::Sonetpathintervalentry> > sonetpathintervalentry;
        
}; // SONETMIB::Sonetpathintervaltable


class SONETMIB::Sonetpathintervaltable::Sonetpathintervalentry : public ydk::Entity
{
    public:
        Sonetpathintervalentry();
        ~Sonetpathintervalentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetpathintervalnumber; //type: int32
        ydk::YLeaf sonetpathintervaless; //type: uint32
        ydk::YLeaf sonetpathintervalsess; //type: uint32
        ydk::YLeaf sonetpathintervalcvs; //type: uint32
        ydk::YLeaf sonetpathintervaluass; //type: uint32
        ydk::YLeaf sonetpathintervalvaliddata; //type: boolean

}; // SONETMIB::Sonetpathintervaltable::Sonetpathintervalentry


class SONETMIB::Sonetsectioncurrenttable : public ydk::Entity
{
    public:
        Sonetsectioncurrenttable();
        ~Sonetsectioncurrenttable();

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

        class Sonetsectioncurrententry; //type: SONETMIB::Sonetsectioncurrenttable::Sonetsectioncurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetsectioncurrenttable::Sonetsectioncurrententry> > sonetsectioncurrententry;
        
}; // SONETMIB::Sonetsectioncurrenttable


class SONETMIB::Sonetsectioncurrenttable::Sonetsectioncurrententry : public ydk::Entity
{
    public:
        Sonetsectioncurrententry();
        ~Sonetsectioncurrententry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetsectioncurrentstatus; //type: int32
        ydk::YLeaf sonetsectioncurrentess; //type: uint32
        ydk::YLeaf sonetsectioncurrentsess; //type: uint32
        ydk::YLeaf sonetsectioncurrentsefss; //type: uint32
        ydk::YLeaf sonetsectioncurrentcvs; //type: uint32

}; // SONETMIB::Sonetsectioncurrenttable::Sonetsectioncurrententry


class SONETMIB::Sonetsectionintervaltable : public ydk::Entity
{
    public:
        Sonetsectionintervaltable();
        ~Sonetsectionintervaltable();

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

        class Sonetsectionintervalentry; //type: SONETMIB::Sonetsectionintervaltable::Sonetsectionintervalentry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetsectionintervaltable::Sonetsectionintervalentry> > sonetsectionintervalentry;
        
}; // SONETMIB::Sonetsectionintervaltable


class SONETMIB::Sonetsectionintervaltable::Sonetsectionintervalentry : public ydk::Entity
{
    public:
        Sonetsectionintervalentry();
        ~Sonetsectionintervalentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetsectionintervalnumber; //type: int32
        ydk::YLeaf sonetsectionintervaless; //type: uint32
        ydk::YLeaf sonetsectionintervalsess; //type: uint32
        ydk::YLeaf sonetsectionintervalsefss; //type: uint32
        ydk::YLeaf sonetsectionintervalcvs; //type: uint32
        ydk::YLeaf sonetsectionintervalvaliddata; //type: boolean

}; // SONETMIB::Sonetsectionintervaltable::Sonetsectionintervalentry


class SONETMIB::Sonetvtcurrenttable : public ydk::Entity
{
    public:
        Sonetvtcurrenttable();
        ~Sonetvtcurrenttable();

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

        class Sonetvtcurrententry; //type: SONETMIB::Sonetvtcurrenttable::Sonetvtcurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetvtcurrenttable::Sonetvtcurrententry> > sonetvtcurrententry;
        
}; // SONETMIB::Sonetvtcurrenttable


class SONETMIB::Sonetvtcurrenttable::Sonetvtcurrententry : public ydk::Entity
{
    public:
        Sonetvtcurrententry();
        ~Sonetvtcurrententry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetvtcurrentwidth; //type: Sonetvtcurrentwidth
        ydk::YLeaf sonetvtcurrentstatus; //type: int32
        ydk::YLeaf sonetvtcurrentess; //type: uint32
        ydk::YLeaf sonetvtcurrentsess; //type: uint32
        ydk::YLeaf sonetvtcurrentcvs; //type: uint32
        ydk::YLeaf sonetvtcurrentuass; //type: uint32
        class Sonetvtcurrentwidth;

}; // SONETMIB::Sonetvtcurrenttable::Sonetvtcurrententry


class SONETMIB::Sonetvtintervaltable : public ydk::Entity
{
    public:
        Sonetvtintervaltable();
        ~Sonetvtintervaltable();

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

        class Sonetvtintervalentry; //type: SONETMIB::Sonetvtintervaltable::Sonetvtintervalentry

        std::vector<std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::Sonetvtintervaltable::Sonetvtintervalentry> > sonetvtintervalentry;
        
}; // SONETMIB::Sonetvtintervaltable


class SONETMIB::Sonetvtintervaltable::Sonetvtintervalentry : public ydk::Entity
{
    public:
        Sonetvtintervalentry();
        ~Sonetvtintervalentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetvtintervalnumber; //type: int32
        ydk::YLeaf sonetvtintervaless; //type: uint32
        ydk::YLeaf sonetvtintervalsess; //type: uint32
        ydk::YLeaf sonetvtintervalcvs; //type: uint32
        ydk::YLeaf sonetvtintervaluass; //type: uint32
        ydk::YLeaf sonetvtintervalvaliddata; //type: boolean

}; // SONETMIB::Sonetvtintervaltable::Sonetvtintervalentry

class SONETMIB::Sonetmedium::Sonetsesthresholdset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf bellcore1991;
        static const ydk::Enum::YLeaf ansi1993;
        static const ydk::Enum::YLeaf itu1995;
        static const ydk::Enum::YLeaf ansi1997;

};

class SONETMIB::Sonetmediumtable::Sonetmediumentry::Sonetmediumtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonet;
        static const ydk::Enum::YLeaf sdh;

};

class SONETMIB::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinecoding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonetMediumOther;
        static const ydk::Enum::YLeaf sonetMediumB3ZS;
        static const ydk::Enum::YLeaf sonetMediumCMI;
        static const ydk::Enum::YLeaf sonetMediumNRZ;
        static const ydk::Enum::YLeaf sonetMediumRZ;

};

class SONETMIB::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonetOther;
        static const ydk::Enum::YLeaf sonetShortSingleMode;
        static const ydk::Enum::YLeaf sonetLongSingleMode;
        static const ydk::Enum::YLeaf sonetMultiMode;
        static const ydk::Enum::YLeaf sonetCoax;
        static const ydk::Enum::YLeaf sonetUTP;

};

class SONETMIB::Sonetpathcurrenttable::Sonetpathcurrententry::Sonetpathcurrentwidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sts1;
        static const ydk::Enum::YLeaf sts3cSTM1;
        static const ydk::Enum::YLeaf sts12cSTM4;
        static const ydk::Enum::YLeaf sts24c;
        static const ydk::Enum::YLeaf sts48cSTM16;
        static const ydk::Enum::YLeaf sts192cSTM64;
        static const ydk::Enum::YLeaf sts768cSTM256;

};

class SONETMIB::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsonetpathpayload : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unequipped;
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf ds3;
        static const ydk::Enum::YLeaf vt15vc11;
        static const ydk::Enum::YLeaf vt2vc12;
        static const ydk::Enum::YLeaf atmCell;
        static const ydk::Enum::YLeaf hdlcFr;
        static const ydk::Enum::YLeaf e3;
        static const ydk::Enum::YLeaf vtStructured;

};

class SONETMIB::Sonetpathcurrenttable::Sonetpathcurrententry::Csptributarymappingtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asynchronous;
        static const ydk::Enum::YLeaf byteSynchronous;

};

class SONETMIB::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsignallingtransportmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf signallingTransferMode;
        static const ydk::Enum::YLeaf clearMode;

};

class SONETMIB::Sonetpathcurrenttable::Sonetpathcurrententry::Csptributarygroupingtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf au3Grouping;
        static const ydk::Enum::YLeaf au4Grouping;

};

class SONETMIB::Sonetvtcurrenttable::Sonetvtcurrententry::Sonetvtcurrentwidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vtWidth15VC11;
        static const ydk::Enum::YLeaf vtWidth2VC12;
        static const ydk::Enum::YLeaf vtWidth3;
        static const ydk::Enum::YLeaf vtWidth6VC2;
        static const ydk::Enum::YLeaf vtWidth6c;

};


}
}

#endif /* _SONET_MIB_ */

