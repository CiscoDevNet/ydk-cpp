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

        class SonetMedium; //type: SONETMIB::SonetMedium
        class SonetMediumTable; //type: SONETMIB::SonetMediumTable
        class SonetSectionCurrentTable; //type: SONETMIB::SonetSectionCurrentTable
        class SonetSectionIntervalTable; //type: SONETMIB::SonetSectionIntervalTable
        class SonetLineCurrentTable; //type: SONETMIB::SonetLineCurrentTable
        class SonetLineIntervalTable; //type: SONETMIB::SonetLineIntervalTable
        class SonetFarEndLineCurrentTable; //type: SONETMIB::SonetFarEndLineCurrentTable
        class SonetFarEndLineIntervalTable; //type: SONETMIB::SonetFarEndLineIntervalTable
        class SonetPathCurrentTable; //type: SONETMIB::SonetPathCurrentTable
        class SonetPathIntervalTable; //type: SONETMIB::SonetPathIntervalTable
        class SonetFarEndPathCurrentTable; //type: SONETMIB::SonetFarEndPathCurrentTable
        class SonetFarEndPathIntervalTable; //type: SONETMIB::SonetFarEndPathIntervalTable
        class SonetVTCurrentTable; //type: SONETMIB::SonetVTCurrentTable
        class SonetVTIntervalTable; //type: SONETMIB::SonetVTIntervalTable
        class SonetFarEndVTCurrentTable; //type: SONETMIB::SonetFarEndVTCurrentTable
        class SonetFarEndVTIntervalTable; //type: SONETMIB::SonetFarEndVTIntervalTable

        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetMedium> sonetmedium;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetMediumTable> sonetmediumtable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetSectionCurrentTable> sonetsectioncurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetSectionIntervalTable> sonetsectionintervaltable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetLineCurrentTable> sonetlinecurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetLineIntervalTable> sonetlineintervaltable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetFarEndLineCurrentTable> sonetfarendlinecurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetFarEndLineIntervalTable> sonetfarendlineintervaltable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetPathCurrentTable> sonetpathcurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetPathIntervalTable> sonetpathintervaltable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetFarEndPathCurrentTable> sonetfarendpathcurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetFarEndPathIntervalTable> sonetfarendpathintervaltable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetVTCurrentTable> sonetvtcurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetVTIntervalTable> sonetvtintervaltable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetFarEndVTCurrentTable> sonetfarendvtcurrenttable;
        std::shared_ptr<cisco_ios_xe::SONET_MIB::SONETMIB::SonetFarEndVTIntervalTable> sonetfarendvtintervaltable;
        
}; // SONETMIB


class SONETMIB::SonetMedium : public ydk::Entity
{
    public:
        SonetMedium();
        ~SonetMedium();

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

        ydk::YLeaf sonetsesthresholdset; //type: SonetSESthresholdSet
        class SonetSESthresholdSet;

}; // SONETMIB::SonetMedium


class SONETMIB::SonetMediumTable : public ydk::Entity
{
    public:
        SonetMediumTable();
        ~SonetMediumTable();

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

        class SonetMediumEntry; //type: SONETMIB::SonetMediumTable::SonetMediumEntry

        ydk::YList sonetmediumentry;
        
}; // SONETMIB::SonetMediumTable


class SONETMIB::SonetMediumTable::SonetMediumEntry : public ydk::Entity
{
    public:
        SonetMediumEntry();
        ~SonetMediumEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetmediumtype; //type: SonetMediumType
        ydk::YLeaf sonetmediumtimeelapsed; //type: int32
        ydk::YLeaf sonetmediumvalidintervals; //type: int32
        ydk::YLeaf sonetmediumlinecoding; //type: SonetMediumLineCoding
        ydk::YLeaf sonetmediumlinetype; //type: SonetMediumLineType
        ydk::YLeaf sonetmediumcircuitidentifier; //type: string
        ydk::YLeaf sonetmediuminvalidintervals; //type: int32
        ydk::YLeaf sonetmediumloopbackconfig; //type: SonetMediumLoopbackConfig
        class SonetMediumType;
        class SonetMediumLineCoding;
        class SonetMediumLineType;

}; // SONETMIB::SonetMediumTable::SonetMediumEntry


class SONETMIB::SonetSectionCurrentTable : public ydk::Entity
{
    public:
        SonetSectionCurrentTable();
        ~SonetSectionCurrentTable();

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

        class SonetSectionCurrentEntry; //type: SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry

        ydk::YList sonetsectioncurrententry;
        
}; // SONETMIB::SonetSectionCurrentTable


class SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry : public ydk::Entity
{
    public:
        SonetSectionCurrentEntry();
        ~SonetSectionCurrentEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetsectioncurrentstatus; //type: int32
        ydk::YLeaf sonetsectioncurrentess; //type: uint32
        ydk::YLeaf sonetsectioncurrentsess; //type: uint32
        ydk::YLeaf sonetsectioncurrentsefss; //type: uint32
        ydk::YLeaf sonetsectioncurrentcvs; //type: uint32

}; // SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry


class SONETMIB::SonetSectionIntervalTable : public ydk::Entity
{
    public:
        SonetSectionIntervalTable();
        ~SonetSectionIntervalTable();

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

        class SonetSectionIntervalEntry; //type: SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry

        ydk::YList sonetsectionintervalentry;
        
}; // SONETMIB::SonetSectionIntervalTable


class SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry : public ydk::Entity
{
    public:
        SonetSectionIntervalEntry();
        ~SonetSectionIntervalEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetsectionintervalnumber; //type: int32
        ydk::YLeaf sonetsectionintervaless; //type: uint32
        ydk::YLeaf sonetsectionintervalsess; //type: uint32
        ydk::YLeaf sonetsectionintervalsefss; //type: uint32
        ydk::YLeaf sonetsectionintervalcvs; //type: uint32
        ydk::YLeaf sonetsectionintervalvaliddata; //type: boolean

}; // SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry


class SONETMIB::SonetLineCurrentTable : public ydk::Entity
{
    public:
        SonetLineCurrentTable();
        ~SonetLineCurrentTable();

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

        class SonetLineCurrentEntry; //type: SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry

        ydk::YList sonetlinecurrententry;
        
}; // SONETMIB::SonetLineCurrentTable


class SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry : public ydk::Entity
{
    public:
        SonetLineCurrentEntry();
        ~SonetLineCurrentEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetlinecurrentstatus; //type: int32
        ydk::YLeaf sonetlinecurrentess; //type: uint32
        ydk::YLeaf sonetlinecurrentsess; //type: uint32
        ydk::YLeaf sonetlinecurrentcvs; //type: uint32
        ydk::YLeaf sonetlinecurrentuass; //type: uint32

}; // SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry


class SONETMIB::SonetLineIntervalTable : public ydk::Entity
{
    public:
        SonetLineIntervalTable();
        ~SonetLineIntervalTable();

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

        class SonetLineIntervalEntry; //type: SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry

        ydk::YList sonetlineintervalentry;
        
}; // SONETMIB::SonetLineIntervalTable


class SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry : public ydk::Entity
{
    public:
        SonetLineIntervalEntry();
        ~SonetLineIntervalEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetlineintervalnumber; //type: int32
        ydk::YLeaf sonetlineintervaless; //type: uint32
        ydk::YLeaf sonetlineintervalsess; //type: uint32
        ydk::YLeaf sonetlineintervalcvs; //type: uint32
        ydk::YLeaf sonetlineintervaluass; //type: uint32
        ydk::YLeaf sonetlineintervalvaliddata; //type: boolean

}; // SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry


class SONETMIB::SonetFarEndLineCurrentTable : public ydk::Entity
{
    public:
        SonetFarEndLineCurrentTable();
        ~SonetFarEndLineCurrentTable();

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

        class SonetFarEndLineCurrentEntry; //type: SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry

        ydk::YList sonetfarendlinecurrententry;
        
}; // SONETMIB::SonetFarEndLineCurrentTable


class SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry : public ydk::Entity
{
    public:
        SonetFarEndLineCurrentEntry();
        ~SonetFarEndLineCurrentEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendlinecurrentess; //type: uint32
        ydk::YLeaf sonetfarendlinecurrentsess; //type: uint32
        ydk::YLeaf sonetfarendlinecurrentcvs; //type: uint32
        ydk::YLeaf sonetfarendlinecurrentuass; //type: uint32

}; // SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry


class SONETMIB::SonetFarEndLineIntervalTable : public ydk::Entity
{
    public:
        SonetFarEndLineIntervalTable();
        ~SonetFarEndLineIntervalTable();

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

        class SonetFarEndLineIntervalEntry; //type: SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry

        ydk::YList sonetfarendlineintervalentry;
        
}; // SONETMIB::SonetFarEndLineIntervalTable


class SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry : public ydk::Entity
{
    public:
        SonetFarEndLineIntervalEntry();
        ~SonetFarEndLineIntervalEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendlineintervalnumber; //type: int32
        ydk::YLeaf sonetfarendlineintervaless; //type: uint32
        ydk::YLeaf sonetfarendlineintervalsess; //type: uint32
        ydk::YLeaf sonetfarendlineintervalcvs; //type: uint32
        ydk::YLeaf sonetfarendlineintervaluass; //type: uint32
        ydk::YLeaf sonetfarendlineintervalvaliddata; //type: boolean

}; // SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry


class SONETMIB::SonetPathCurrentTable : public ydk::Entity
{
    public:
        SonetPathCurrentTable();
        ~SonetPathCurrentTable();

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

        class SonetPathCurrentEntry; //type: SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry

        ydk::YList sonetpathcurrententry;
        
}; // SONETMIB::SonetPathCurrentTable


class SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry : public ydk::Entity
{
    public:
        SonetPathCurrentEntry();
        ~SonetPathCurrentEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetpathcurrentwidth; //type: SonetPathCurrentWidth
        ydk::YLeaf sonetpathcurrentstatus; //type: int32
        ydk::YLeaf sonetpathcurrentess; //type: uint32
        ydk::YLeaf sonetpathcurrentsess; //type: uint32
        ydk::YLeaf sonetpathcurrentcvs; //type: uint32
        ydk::YLeaf sonetpathcurrentuass; //type: uint32
        ydk::YLeaf cspsonetpathpayload; //type: CspSonetPathPayload
        ydk::YLeaf csptributarymappingtype; //type: CspTributaryMappingType
        ydk::YLeaf cspsignallingtransportmode; //type: CspSignallingTransportMode
        ydk::YLeaf csptributarygroupingtype; //type: CspTributaryGroupingType
        class SonetPathCurrentWidth;
        class CspSonetPathPayload;
        class CspTributaryMappingType;
        class CspSignallingTransportMode;
        class CspTributaryGroupingType;

}; // SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry


class SONETMIB::SonetPathIntervalTable : public ydk::Entity
{
    public:
        SonetPathIntervalTable();
        ~SonetPathIntervalTable();

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

        class SonetPathIntervalEntry; //type: SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry

        ydk::YList sonetpathintervalentry;
        
}; // SONETMIB::SonetPathIntervalTable


class SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry : public ydk::Entity
{
    public:
        SonetPathIntervalEntry();
        ~SonetPathIntervalEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetpathintervalnumber; //type: int32
        ydk::YLeaf sonetpathintervaless; //type: uint32
        ydk::YLeaf sonetpathintervalsess; //type: uint32
        ydk::YLeaf sonetpathintervalcvs; //type: uint32
        ydk::YLeaf sonetpathintervaluass; //type: uint32
        ydk::YLeaf sonetpathintervalvaliddata; //type: boolean

}; // SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry


class SONETMIB::SonetFarEndPathCurrentTable : public ydk::Entity
{
    public:
        SonetFarEndPathCurrentTable();
        ~SonetFarEndPathCurrentTable();

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

        class SonetFarEndPathCurrentEntry; //type: SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry

        ydk::YList sonetfarendpathcurrententry;
        
}; // SONETMIB::SonetFarEndPathCurrentTable


class SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry : public ydk::Entity
{
    public:
        SonetFarEndPathCurrentEntry();
        ~SonetFarEndPathCurrentEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendpathcurrentess; //type: uint32
        ydk::YLeaf sonetfarendpathcurrentsess; //type: uint32
        ydk::YLeaf sonetfarendpathcurrentcvs; //type: uint32
        ydk::YLeaf sonetfarendpathcurrentuass; //type: uint32

}; // SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry


class SONETMIB::SonetFarEndPathIntervalTable : public ydk::Entity
{
    public:
        SonetFarEndPathIntervalTable();
        ~SonetFarEndPathIntervalTable();

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

        class SonetFarEndPathIntervalEntry; //type: SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry

        ydk::YList sonetfarendpathintervalentry;
        
}; // SONETMIB::SonetFarEndPathIntervalTable


class SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry : public ydk::Entity
{
    public:
        SonetFarEndPathIntervalEntry();
        ~SonetFarEndPathIntervalEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendpathintervalnumber; //type: int32
        ydk::YLeaf sonetfarendpathintervaless; //type: uint32
        ydk::YLeaf sonetfarendpathintervalsess; //type: uint32
        ydk::YLeaf sonetfarendpathintervalcvs; //type: uint32
        ydk::YLeaf sonetfarendpathintervaluass; //type: uint32
        ydk::YLeaf sonetfarendpathintervalvaliddata; //type: boolean

}; // SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry


class SONETMIB::SonetVTCurrentTable : public ydk::Entity
{
    public:
        SonetVTCurrentTable();
        ~SonetVTCurrentTable();

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

        class SonetVTCurrentEntry; //type: SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry

        ydk::YList sonetvtcurrententry;
        
}; // SONETMIB::SonetVTCurrentTable


class SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry : public ydk::Entity
{
    public:
        SonetVTCurrentEntry();
        ~SonetVTCurrentEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetvtcurrentwidth; //type: SonetVTCurrentWidth
        ydk::YLeaf sonetvtcurrentstatus; //type: int32
        ydk::YLeaf sonetvtcurrentess; //type: uint32
        ydk::YLeaf sonetvtcurrentsess; //type: uint32
        ydk::YLeaf sonetvtcurrentcvs; //type: uint32
        ydk::YLeaf sonetvtcurrentuass; //type: uint32
        class SonetVTCurrentWidth;

}; // SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry


class SONETMIB::SonetVTIntervalTable : public ydk::Entity
{
    public:
        SonetVTIntervalTable();
        ~SonetVTIntervalTable();

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

        class SonetVTIntervalEntry; //type: SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry

        ydk::YList sonetvtintervalentry;
        
}; // SONETMIB::SonetVTIntervalTable


class SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry : public ydk::Entity
{
    public:
        SonetVTIntervalEntry();
        ~SonetVTIntervalEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetvtintervalnumber; //type: int32
        ydk::YLeaf sonetvtintervaless; //type: uint32
        ydk::YLeaf sonetvtintervalsess; //type: uint32
        ydk::YLeaf sonetvtintervalcvs; //type: uint32
        ydk::YLeaf sonetvtintervaluass; //type: uint32
        ydk::YLeaf sonetvtintervalvaliddata; //type: boolean

}; // SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry


class SONETMIB::SonetFarEndVTCurrentTable : public ydk::Entity
{
    public:
        SonetFarEndVTCurrentTable();
        ~SonetFarEndVTCurrentTable();

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

        class SonetFarEndVTCurrentEntry; //type: SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry

        ydk::YList sonetfarendvtcurrententry;
        
}; // SONETMIB::SonetFarEndVTCurrentTable


class SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry : public ydk::Entity
{
    public:
        SonetFarEndVTCurrentEntry();
        ~SonetFarEndVTCurrentEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendvtcurrentess; //type: uint32
        ydk::YLeaf sonetfarendvtcurrentsess; //type: uint32
        ydk::YLeaf sonetfarendvtcurrentcvs; //type: uint32
        ydk::YLeaf sonetfarendvtcurrentuass; //type: uint32

}; // SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry


class SONETMIB::SonetFarEndVTIntervalTable : public ydk::Entity
{
    public:
        SonetFarEndVTIntervalTable();
        ~SonetFarEndVTIntervalTable();

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

        class SonetFarEndVTIntervalEntry; //type: SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry

        ydk::YList sonetfarendvtintervalentry;
        
}; // SONETMIB::SonetFarEndVTIntervalTable


class SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry : public ydk::Entity
{
    public:
        SonetFarEndVTIntervalEntry();
        ~SonetFarEndVTIntervalEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendvtintervalnumber; //type: int32
        ydk::YLeaf sonetfarendvtintervaless; //type: uint32
        ydk::YLeaf sonetfarendvtintervalsess; //type: uint32
        ydk::YLeaf sonetfarendvtintervalcvs; //type: uint32
        ydk::YLeaf sonetfarendvtintervaluass; //type: uint32
        ydk::YLeaf sonetfarendvtintervalvaliddata; //type: boolean

}; // SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry

class SONETMIB::SonetMedium::SonetSESthresholdSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf bellcore1991;
        static const ydk::Enum::YLeaf ansi1993;
        static const ydk::Enum::YLeaf itu1995;
        static const ydk::Enum::YLeaf ansi1997;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "bellcore1991") return 2;
            if (name == "ansi1993") return 3;
            if (name == "itu1995") return 4;
            if (name == "ansi1997") return 5;
            return -1;
        }
};

class SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonet;
        static const ydk::Enum::YLeaf sdh;

        static int get_enum_value(const std::string & name) {
            if (name == "sonet") return 1;
            if (name == "sdh") return 2;
            return -1;
        }
};

class SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineCoding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonetMediumOther;
        static const ydk::Enum::YLeaf sonetMediumB3ZS;
        static const ydk::Enum::YLeaf sonetMediumCMI;
        static const ydk::Enum::YLeaf sonetMediumNRZ;
        static const ydk::Enum::YLeaf sonetMediumRZ;

        static int get_enum_value(const std::string & name) {
            if (name == "sonetMediumOther") return 1;
            if (name == "sonetMediumB3ZS") return 2;
            if (name == "sonetMediumCMI") return 3;
            if (name == "sonetMediumNRZ") return 4;
            if (name == "sonetMediumRZ") return 5;
            return -1;
        }
};

class SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonetOther;
        static const ydk::Enum::YLeaf sonetShortSingleMode;
        static const ydk::Enum::YLeaf sonetLongSingleMode;
        static const ydk::Enum::YLeaf sonetMultiMode;
        static const ydk::Enum::YLeaf sonetCoax;
        static const ydk::Enum::YLeaf sonetUTP;

        static int get_enum_value(const std::string & name) {
            if (name == "sonetOther") return 1;
            if (name == "sonetShortSingleMode") return 2;
            if (name == "sonetLongSingleMode") return 3;
            if (name == "sonetMultiMode") return 4;
            if (name == "sonetCoax") return 5;
            if (name == "sonetUTP") return 6;
            return -1;
        }
};

class SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::SonetPathCurrentWidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sts1;
        static const ydk::Enum::YLeaf sts3cSTM1;
        static const ydk::Enum::YLeaf sts12cSTM4;
        static const ydk::Enum::YLeaf sts24c;
        static const ydk::Enum::YLeaf sts48cSTM16;
        static const ydk::Enum::YLeaf sts192cSTM64;
        static const ydk::Enum::YLeaf sts768cSTM256;

        static int get_enum_value(const std::string & name) {
            if (name == "sts1") return 1;
            if (name == "sts3cSTM1") return 2;
            if (name == "sts12cSTM4") return 3;
            if (name == "sts24c") return 4;
            if (name == "sts48cSTM16") return 5;
            if (name == "sts192cSTM64") return 6;
            if (name == "sts768cSTM256") return 7;
            return -1;
        }
};

class SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSonetPathPayload : public ydk::Enum
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

        static int get_enum_value(const std::string & name) {
            if (name == "unequipped") return 1;
            if (name == "unspecified") return 2;
            if (name == "ds3") return 3;
            if (name == "vt15vc11") return 4;
            if (name == "vt2vc12") return 5;
            if (name == "atmCell") return 6;
            if (name == "hdlcFr") return 7;
            if (name == "e3") return 8;
            if (name == "vtStructured") return 9;
            return -1;
        }
};

class SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspTributaryMappingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asynchronous;
        static const ydk::Enum::YLeaf byteSynchronous;

        static int get_enum_value(const std::string & name) {
            if (name == "asynchronous") return 1;
            if (name == "byteSynchronous") return 2;
            return -1;
        }
};

class SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSignallingTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf signallingTransferMode;
        static const ydk::Enum::YLeaf clearMode;

        static int get_enum_value(const std::string & name) {
            if (name == "notApplicable") return 1;
            if (name == "signallingTransferMode") return 2;
            if (name == "clearMode") return 3;
            return -1;
        }
};

class SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspTributaryGroupingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf au3Grouping;
        static const ydk::Enum::YLeaf au4Grouping;

        static int get_enum_value(const std::string & name) {
            if (name == "notApplicable") return 1;
            if (name == "au3Grouping") return 2;
            if (name == "au4Grouping") return 3;
            return -1;
        }
};

class SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::SonetVTCurrentWidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vtWidth15VC11;
        static const ydk::Enum::YLeaf vtWidth2VC12;
        static const ydk::Enum::YLeaf vtWidth3;
        static const ydk::Enum::YLeaf vtWidth6VC2;
        static const ydk::Enum::YLeaf vtWidth6c;

        static int get_enum_value(const std::string & name) {
            if (name == "vtWidth15VC11") return 1;
            if (name == "vtWidth2VC12") return 2;
            if (name == "vtWidth3") return 3;
            if (name == "vtWidth6VC2") return 4;
            if (name == "vtWidth6c") return 5;
            return -1;
        }
};


}
}

#endif /* _SONET_MIB_ */

