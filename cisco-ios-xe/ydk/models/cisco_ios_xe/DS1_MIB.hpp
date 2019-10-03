#ifndef _DS1_MIB_
#define _DS1_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace DS1_MIB {

class DS1MIB : public ydk::Entity
{
    public:
        DS1MIB();
        ~DS1MIB();

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

        class Dsx1ConfigTable; //type: DS1MIB::Dsx1ConfigTable
        class Dsx1CurrentTable; //type: DS1MIB::Dsx1CurrentTable
        class Dsx1IntervalTable; //type: DS1MIB::Dsx1IntervalTable
        class Dsx1TotalTable; //type: DS1MIB::Dsx1TotalTable
        class Dsx1FarEndCurrentTable; //type: DS1MIB::Dsx1FarEndCurrentTable
        class Dsx1FarEndIntervalTable; //type: DS1MIB::Dsx1FarEndIntervalTable
        class Dsx1FarEndTotalTable; //type: DS1MIB::Dsx1FarEndTotalTable
        class Dsx1FracTable; //type: DS1MIB::Dsx1FracTable
        class Dsx1ChanMappingTable; //type: DS1MIB::Dsx1ChanMappingTable

        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1ConfigTable> dsx1configtable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1CurrentTable> dsx1currenttable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1IntervalTable> dsx1intervaltable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1TotalTable> dsx1totaltable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1FarEndCurrentTable> dsx1farendcurrenttable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1FarEndIntervalTable> dsx1farendintervaltable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1FarEndTotalTable> dsx1farendtotaltable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1FracTable> dsx1fractable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1ChanMappingTable> dsx1chanmappingtable;
        
}; // DS1MIB


class DS1MIB::Dsx1ConfigTable : public ydk::Entity
{
    public:
        Dsx1ConfigTable();
        ~Dsx1ConfigTable();

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

        class Dsx1ConfigEntry; //type: DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry

        ydk::YList dsx1configentry;
        
}; // DS1MIB::Dsx1ConfigTable


class DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry : public ydk::Entity
{
    public:
        Dsx1ConfigEntry();
        ~Dsx1ConfigEntry();

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

        ydk::YLeaf dsx1lineindex; //type: int32
        ydk::YLeaf dsx1ifindex; //type: int32
        ydk::YLeaf dsx1timeelapsed; //type: int32
        ydk::YLeaf dsx1validintervals; //type: int32
        ydk::YLeaf dsx1linetype; //type: Dsx1LineType
        ydk::YLeaf dsx1linecoding; //type: Dsx1LineCoding
        ydk::YLeaf dsx1sendcode; //type: Dsx1SendCode
        ydk::YLeaf dsx1circuitidentifier; //type: string
        ydk::YLeaf dsx1loopbackconfig; //type: Dsx1LoopbackConfig
        ydk::YLeaf dsx1linestatus; //type: int32
        ydk::YLeaf dsx1signalmode; //type: Dsx1SignalMode
        ydk::YLeaf dsx1transmitclocksource; //type: Dsx1TransmitClockSource
        ydk::YLeaf dsx1fdl; //type: int32
        ydk::YLeaf dsx1invalidintervals; //type: int32
        ydk::YLeaf dsx1linelength; //type: int32
        ydk::YLeaf dsx1linestatuslastchange; //type: uint32
        ydk::YLeaf dsx1linestatuschangetrapenable; //type: Dsx1LineStatusChangeTrapEnable
        ydk::YLeaf dsx1loopbackstatus; //type: int32
        ydk::YLeaf dsx1ds1channelnumber; //type: int32
        ydk::YLeaf dsx1channelization; //type: Dsx1Channelization
        class Dsx1LineType;
        class Dsx1LineCoding;
        class Dsx1SendCode;
        class Dsx1LoopbackConfig;
        class Dsx1SignalMode;
        class Dsx1TransmitClockSource;
        class Dsx1LineStatusChangeTrapEnable;
        class Dsx1Channelization;

}; // DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry


class DS1MIB::Dsx1CurrentTable : public ydk::Entity
{
    public:
        Dsx1CurrentTable();
        ~Dsx1CurrentTable();

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

        class Dsx1CurrentEntry; //type: DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry

        ydk::YList dsx1currententry;
        
}; // DS1MIB::Dsx1CurrentTable


class DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry : public ydk::Entity
{
    public:
        Dsx1CurrentEntry();
        ~Dsx1CurrentEntry();

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

        ydk::YLeaf dsx1currentindex; //type: int32
        ydk::YLeaf dsx1currentess; //type: uint32
        ydk::YLeaf dsx1currentsess; //type: uint32
        ydk::YLeaf dsx1currentsefss; //type: uint32
        ydk::YLeaf dsx1currentuass; //type: uint32
        ydk::YLeaf dsx1currentcsss; //type: uint32
        ydk::YLeaf dsx1currentpcvs; //type: uint32
        ydk::YLeaf dsx1currentless; //type: uint32
        ydk::YLeaf dsx1currentbess; //type: uint32
        ydk::YLeaf dsx1currentdms; //type: uint32
        ydk::YLeaf dsx1currentlcvs; //type: uint32

}; // DS1MIB::Dsx1CurrentTable::Dsx1CurrentEntry


class DS1MIB::Dsx1IntervalTable : public ydk::Entity
{
    public:
        Dsx1IntervalTable();
        ~Dsx1IntervalTable();

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

        class Dsx1IntervalEntry; //type: DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry

        ydk::YList dsx1intervalentry;
        
}; // DS1MIB::Dsx1IntervalTable


class DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry : public ydk::Entity
{
    public:
        Dsx1IntervalEntry();
        ~Dsx1IntervalEntry();

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

        ydk::YLeaf dsx1intervalindex; //type: int32
        ydk::YLeaf dsx1intervalnumber; //type: int32
        ydk::YLeaf dsx1intervaless; //type: uint32
        ydk::YLeaf dsx1intervalsess; //type: uint32
        ydk::YLeaf dsx1intervalsefss; //type: uint32
        ydk::YLeaf dsx1intervaluass; //type: uint32
        ydk::YLeaf dsx1intervalcsss; //type: uint32
        ydk::YLeaf dsx1intervalpcvs; //type: uint32
        ydk::YLeaf dsx1intervalless; //type: uint32
        ydk::YLeaf dsx1intervalbess; //type: uint32
        ydk::YLeaf dsx1intervaldms; //type: uint32
        ydk::YLeaf dsx1intervallcvs; //type: uint32
        ydk::YLeaf dsx1intervalvaliddata; //type: boolean

}; // DS1MIB::Dsx1IntervalTable::Dsx1IntervalEntry


class DS1MIB::Dsx1TotalTable : public ydk::Entity
{
    public:
        Dsx1TotalTable();
        ~Dsx1TotalTable();

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

        class Dsx1TotalEntry; //type: DS1MIB::Dsx1TotalTable::Dsx1TotalEntry

        ydk::YList dsx1totalentry;
        
}; // DS1MIB::Dsx1TotalTable


class DS1MIB::Dsx1TotalTable::Dsx1TotalEntry : public ydk::Entity
{
    public:
        Dsx1TotalEntry();
        ~Dsx1TotalEntry();

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

        ydk::YLeaf dsx1totalindex; //type: int32
        ydk::YLeaf dsx1totaless; //type: uint32
        ydk::YLeaf dsx1totalsess; //type: uint32
        ydk::YLeaf dsx1totalsefss; //type: uint32
        ydk::YLeaf dsx1totaluass; //type: uint32
        ydk::YLeaf dsx1totalcsss; //type: uint32
        ydk::YLeaf dsx1totalpcvs; //type: uint32
        ydk::YLeaf dsx1totalless; //type: uint32
        ydk::YLeaf dsx1totalbess; //type: uint32
        ydk::YLeaf dsx1totaldms; //type: uint32
        ydk::YLeaf dsx1totallcvs; //type: uint32

}; // DS1MIB::Dsx1TotalTable::Dsx1TotalEntry


class DS1MIB::Dsx1FarEndCurrentTable : public ydk::Entity
{
    public:
        Dsx1FarEndCurrentTable();
        ~Dsx1FarEndCurrentTable();

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

        class Dsx1FarEndCurrentEntry; //type: DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry

        ydk::YList dsx1farendcurrententry;
        
}; // DS1MIB::Dsx1FarEndCurrentTable


class DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry : public ydk::Entity
{
    public:
        Dsx1FarEndCurrentEntry();
        ~Dsx1FarEndCurrentEntry();

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

        ydk::YLeaf dsx1farendcurrentindex; //type: int32
        ydk::YLeaf dsx1farendtimeelapsed; //type: int32
        ydk::YLeaf dsx1farendvalidintervals; //type: int32
        ydk::YLeaf dsx1farendcurrentess; //type: uint32
        ydk::YLeaf dsx1farendcurrentsess; //type: uint32
        ydk::YLeaf dsx1farendcurrentsefss; //type: uint32
        ydk::YLeaf dsx1farendcurrentuass; //type: uint32
        ydk::YLeaf dsx1farendcurrentcsss; //type: uint32
        ydk::YLeaf dsx1farendcurrentless; //type: uint32
        ydk::YLeaf dsx1farendcurrentpcvs; //type: uint32
        ydk::YLeaf dsx1farendcurrentbess; //type: uint32
        ydk::YLeaf dsx1farendcurrentdms; //type: uint32
        ydk::YLeaf dsx1farendinvalidintervals; //type: int32

}; // DS1MIB::Dsx1FarEndCurrentTable::Dsx1FarEndCurrentEntry


class DS1MIB::Dsx1FarEndIntervalTable : public ydk::Entity
{
    public:
        Dsx1FarEndIntervalTable();
        ~Dsx1FarEndIntervalTable();

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

        class Dsx1FarEndIntervalEntry; //type: DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry

        ydk::YList dsx1farendintervalentry;
        
}; // DS1MIB::Dsx1FarEndIntervalTable


class DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry : public ydk::Entity
{
    public:
        Dsx1FarEndIntervalEntry();
        ~Dsx1FarEndIntervalEntry();

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

        ydk::YLeaf dsx1farendintervalindex; //type: int32
        ydk::YLeaf dsx1farendintervalnumber; //type: int32
        ydk::YLeaf dsx1farendintervaless; //type: uint32
        ydk::YLeaf dsx1farendintervalsess; //type: uint32
        ydk::YLeaf dsx1farendintervalsefss; //type: uint32
        ydk::YLeaf dsx1farendintervaluass; //type: uint32
        ydk::YLeaf dsx1farendintervalcsss; //type: uint32
        ydk::YLeaf dsx1farendintervalless; //type: uint32
        ydk::YLeaf dsx1farendintervalpcvs; //type: uint32
        ydk::YLeaf dsx1farendintervalbess; //type: uint32
        ydk::YLeaf dsx1farendintervaldms; //type: uint32
        ydk::YLeaf dsx1farendintervalvaliddata; //type: boolean

}; // DS1MIB::Dsx1FarEndIntervalTable::Dsx1FarEndIntervalEntry


class DS1MIB::Dsx1FarEndTotalTable : public ydk::Entity
{
    public:
        Dsx1FarEndTotalTable();
        ~Dsx1FarEndTotalTable();

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

        class Dsx1FarEndTotalEntry; //type: DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry

        ydk::YList dsx1farendtotalentry;
        
}; // DS1MIB::Dsx1FarEndTotalTable


class DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry : public ydk::Entity
{
    public:
        Dsx1FarEndTotalEntry();
        ~Dsx1FarEndTotalEntry();

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

        ydk::YLeaf dsx1farendtotalindex; //type: int32
        ydk::YLeaf dsx1farendtotaless; //type: uint32
        ydk::YLeaf dsx1farendtotalsess; //type: uint32
        ydk::YLeaf dsx1farendtotalsefss; //type: uint32
        ydk::YLeaf dsx1farendtotaluass; //type: uint32
        ydk::YLeaf dsx1farendtotalcsss; //type: uint32
        ydk::YLeaf dsx1farendtotalless; //type: uint32
        ydk::YLeaf dsx1farendtotalpcvs; //type: uint32
        ydk::YLeaf dsx1farendtotalbess; //type: uint32
        ydk::YLeaf dsx1farendtotaldms; //type: uint32

}; // DS1MIB::Dsx1FarEndTotalTable::Dsx1FarEndTotalEntry


class DS1MIB::Dsx1FracTable : public ydk::Entity
{
    public:
        Dsx1FracTable();
        ~Dsx1FracTable();

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

        class Dsx1FracEntry; //type: DS1MIB::Dsx1FracTable::Dsx1FracEntry

        ydk::YList dsx1fracentry;
        
}; // DS1MIB::Dsx1FracTable


class DS1MIB::Dsx1FracTable::Dsx1FracEntry : public ydk::Entity
{
    public:
        Dsx1FracEntry();
        ~Dsx1FracEntry();

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

        ydk::YLeaf dsx1fracindex; //type: int32
        ydk::YLeaf dsx1fracnumber; //type: int32
        ydk::YLeaf dsx1fracifindex; //type: int32

}; // DS1MIB::Dsx1FracTable::Dsx1FracEntry


class DS1MIB::Dsx1ChanMappingTable : public ydk::Entity
{
    public:
        Dsx1ChanMappingTable();
        ~Dsx1ChanMappingTable();

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

        class Dsx1ChanMappingEntry; //type: DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry

        ydk::YList dsx1chanmappingentry;
        
}; // DS1MIB::Dsx1ChanMappingTable


class DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry : public ydk::Entity
{
    public:
        Dsx1ChanMappingEntry();
        ~Dsx1ChanMappingEntry();

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
        //type: int32 (refers to cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::dsx1ds1channelnumber)
        ydk::YLeaf dsx1ds1channelnumber;
        ydk::YLeaf dsx1chanmappedifindex; //type: int32

}; // DS1MIB::Dsx1ChanMappingTable::Dsx1ChanMappingEntry

class DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf dsx1ESF;
        static const ydk::Enum::YLeaf dsx1D4;
        static const ydk::Enum::YLeaf dsx1E1;
        static const ydk::Enum::YLeaf dsx1E1CRC;
        static const ydk::Enum::YLeaf dsx1E1MF;
        static const ydk::Enum::YLeaf dsx1E1CRCMF;
        static const ydk::Enum::YLeaf dsx1Unframed;
        static const ydk::Enum::YLeaf dsx1E1Unframed;
        static const ydk::Enum::YLeaf dsx1DS2M12;
        static const ydk::Enum::YLeaf dsx2E2;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "dsx1ESF") return 2;
            if (name == "dsx1D4") return 3;
            if (name == "dsx1E1") return 4;
            if (name == "dsx1E1CRC") return 5;
            if (name == "dsx1E1MF") return 6;
            if (name == "dsx1E1CRCMF") return 7;
            if (name == "dsx1Unframed") return 8;
            if (name == "dsx1E1Unframed") return 9;
            if (name == "dsx1DS2M12") return 10;
            if (name == "dsx2E2") return 11;
            return -1;
        }
};

class DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineCoding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx1JBZS;
        static const ydk::Enum::YLeaf dsx1B8ZS;
        static const ydk::Enum::YLeaf dsx1HDB3;
        static const ydk::Enum::YLeaf dsx1ZBTSI;
        static const ydk::Enum::YLeaf dsx1AMI;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf dsx1B6ZS;

        static int get_enum_value(const std::string & name) {
            if (name == "dsx1JBZS") return 1;
            if (name == "dsx1B8ZS") return 2;
            if (name == "dsx1HDB3") return 3;
            if (name == "dsx1ZBTSI") return 4;
            if (name == "dsx1AMI") return 5;
            if (name == "other") return 6;
            if (name == "dsx1B6ZS") return 7;
            return -1;
        }
};

class DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SendCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx1SendNoCode;
        static const ydk::Enum::YLeaf dsx1SendLineCode;
        static const ydk::Enum::YLeaf dsx1SendPayloadCode;
        static const ydk::Enum::YLeaf dsx1SendResetCode;
        static const ydk::Enum::YLeaf dsx1SendQRS;
        static const ydk::Enum::YLeaf dsx1Send511Pattern;
        static const ydk::Enum::YLeaf dsx1Send3in24Pattern;
        static const ydk::Enum::YLeaf dsx1SendOtherTestPattern;

        static int get_enum_value(const std::string & name) {
            if (name == "dsx1SendNoCode") return 1;
            if (name == "dsx1SendLineCode") return 2;
            if (name == "dsx1SendPayloadCode") return 3;
            if (name == "dsx1SendResetCode") return 4;
            if (name == "dsx1SendQRS") return 5;
            if (name == "dsx1Send511Pattern") return 6;
            if (name == "dsx1Send3in24Pattern") return 7;
            if (name == "dsx1SendOtherTestPattern") return 8;
            return -1;
        }
};

class DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LoopbackConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx1NoLoop;
        static const ydk::Enum::YLeaf dsx1PayloadLoop;
        static const ydk::Enum::YLeaf dsx1LineLoop;
        static const ydk::Enum::YLeaf dsx1OtherLoop;
        static const ydk::Enum::YLeaf dsx1InwardLoop;
        static const ydk::Enum::YLeaf dsx1DualLoop;

        static int get_enum_value(const std::string & name) {
            if (name == "dsx1NoLoop") return 1;
            if (name == "dsx1PayloadLoop") return 2;
            if (name == "dsx1LineLoop") return 3;
            if (name == "dsx1OtherLoop") return 4;
            if (name == "dsx1InwardLoop") return 5;
            if (name == "dsx1DualLoop") return 6;
            return -1;
        }
};

class DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1SignalMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf robbedBit;
        static const ydk::Enum::YLeaf bitOriented;
        static const ydk::Enum::YLeaf messageOriented;
        static const ydk::Enum::YLeaf other;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "robbedBit") return 2;
            if (name == "bitOriented") return 3;
            if (name == "messageOriented") return 4;
            if (name == "other") return 5;
            return -1;
        }
};

class DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1TransmitClockSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loopTiming;
        static const ydk::Enum::YLeaf localTiming;
        static const ydk::Enum::YLeaf throughTiming;

        static int get_enum_value(const std::string & name) {
            if (name == "loopTiming") return 1;
            if (name == "localTiming") return 2;
            if (name == "throughTiming") return 3;
            return -1;
        }
};

class DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1LineStatusChangeTrapEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class DS1MIB::Dsx1ConfigTable::Dsx1ConfigEntry::Dsx1Channelization : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabledDs0;
        static const ydk::Enum::YLeaf enabledDs1;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "enabledDs0") return 2;
            if (name == "enabledDs1") return 3;
            return -1;
        }
};


}
}

#endif /* _DS1_MIB_ */

