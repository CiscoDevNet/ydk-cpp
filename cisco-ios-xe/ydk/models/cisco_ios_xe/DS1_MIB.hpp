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

        class Dsx1Configtable; //type: DS1MIB::Dsx1Configtable
        class Dsx1Currenttable; //type: DS1MIB::Dsx1Currenttable
        class Dsx1Intervaltable; //type: DS1MIB::Dsx1Intervaltable
        class Dsx1Totaltable; //type: DS1MIB::Dsx1Totaltable
        class Dsx1Farendcurrenttable; //type: DS1MIB::Dsx1Farendcurrenttable
        class Dsx1Farendintervaltable; //type: DS1MIB::Dsx1Farendintervaltable
        class Dsx1Farendtotaltable; //type: DS1MIB::Dsx1Farendtotaltable
        class Dsx1Fractable; //type: DS1MIB::Dsx1Fractable
        class Dsx1Chanmappingtable; //type: DS1MIB::Dsx1Chanmappingtable

        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Configtable> dsx1configtable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Currenttable> dsx1currenttable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Intervaltable> dsx1intervaltable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Totaltable> dsx1totaltable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Farendcurrenttable> dsx1farendcurrenttable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Farendintervaltable> dsx1farendintervaltable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Farendtotaltable> dsx1farendtotaltable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Fractable> dsx1fractable;
        std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Chanmappingtable> dsx1chanmappingtable;
        
}; // DS1MIB


class DS1MIB::Dsx1Configtable : public ydk::Entity
{
    public:
        Dsx1Configtable();
        ~Dsx1Configtable();

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

        class Dsx1Configentry; //type: DS1MIB::Dsx1Configtable::Dsx1Configentry

        std::vector<std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Configtable::Dsx1Configentry> > dsx1configentry;
        
}; // DS1MIB::Dsx1Configtable


class DS1MIB::Dsx1Configtable::Dsx1Configentry : public ydk::Entity
{
    public:
        Dsx1Configentry();
        ~Dsx1Configentry();

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
        ydk::YLeaf dsx1linetype; //type: Dsx1Linetype
        ydk::YLeaf dsx1linecoding; //type: Dsx1Linecoding
        ydk::YLeaf dsx1sendcode; //type: Dsx1Sendcode
        ydk::YLeaf dsx1circuitidentifier; //type: string
        ydk::YLeaf dsx1loopbackconfig; //type: Dsx1Loopbackconfig
        ydk::YLeaf dsx1linestatus; //type: int32
        ydk::YLeaf dsx1signalmode; //type: Dsx1Signalmode
        ydk::YLeaf dsx1transmitclocksource; //type: Dsx1Transmitclocksource
        ydk::YLeaf dsx1fdl; //type: int32
        ydk::YLeaf dsx1invalidintervals; //type: int32
        ydk::YLeaf dsx1linelength; //type: int32
        ydk::YLeaf dsx1linestatuslastchange; //type: uint32
        ydk::YLeaf dsx1linestatuschangetrapenable; //type: Dsx1Linestatuschangetrapenable
        ydk::YLeaf dsx1loopbackstatus; //type: int32
        ydk::YLeaf dsx1ds1channelnumber; //type: int32
        ydk::YLeaf dsx1channelization; //type: Dsx1Channelization
        class Dsx1Linetype;
        class Dsx1Linecoding;
        class Dsx1Sendcode;
        class Dsx1Loopbackconfig;
        class Dsx1Signalmode;
        class Dsx1Transmitclocksource;
        class Dsx1Linestatuschangetrapenable;
        class Dsx1Channelization;

}; // DS1MIB::Dsx1Configtable::Dsx1Configentry


class DS1MIB::Dsx1Currenttable : public ydk::Entity
{
    public:
        Dsx1Currenttable();
        ~Dsx1Currenttable();

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

        class Dsx1Currententry; //type: DS1MIB::Dsx1Currenttable::Dsx1Currententry

        std::vector<std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Currenttable::Dsx1Currententry> > dsx1currententry;
        
}; // DS1MIB::Dsx1Currenttable


class DS1MIB::Dsx1Currenttable::Dsx1Currententry : public ydk::Entity
{
    public:
        Dsx1Currententry();
        ~Dsx1Currententry();

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

}; // DS1MIB::Dsx1Currenttable::Dsx1Currententry


class DS1MIB::Dsx1Intervaltable : public ydk::Entity
{
    public:
        Dsx1Intervaltable();
        ~Dsx1Intervaltable();

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

        class Dsx1Intervalentry; //type: DS1MIB::Dsx1Intervaltable::Dsx1Intervalentry

        std::vector<std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Intervaltable::Dsx1Intervalentry> > dsx1intervalentry;
        
}; // DS1MIB::Dsx1Intervaltable


class DS1MIB::Dsx1Intervaltable::Dsx1Intervalentry : public ydk::Entity
{
    public:
        Dsx1Intervalentry();
        ~Dsx1Intervalentry();

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

}; // DS1MIB::Dsx1Intervaltable::Dsx1Intervalentry


class DS1MIB::Dsx1Totaltable : public ydk::Entity
{
    public:
        Dsx1Totaltable();
        ~Dsx1Totaltable();

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

        class Dsx1Totalentry; //type: DS1MIB::Dsx1Totaltable::Dsx1Totalentry

        std::vector<std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Totaltable::Dsx1Totalentry> > dsx1totalentry;
        
}; // DS1MIB::Dsx1Totaltable


class DS1MIB::Dsx1Totaltable::Dsx1Totalentry : public ydk::Entity
{
    public:
        Dsx1Totalentry();
        ~Dsx1Totalentry();

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

}; // DS1MIB::Dsx1Totaltable::Dsx1Totalentry


class DS1MIB::Dsx1Farendcurrenttable : public ydk::Entity
{
    public:
        Dsx1Farendcurrenttable();
        ~Dsx1Farendcurrenttable();

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

        class Dsx1Farendcurrententry; //type: DS1MIB::Dsx1Farendcurrenttable::Dsx1Farendcurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Farendcurrenttable::Dsx1Farendcurrententry> > dsx1farendcurrententry;
        
}; // DS1MIB::Dsx1Farendcurrenttable


class DS1MIB::Dsx1Farendcurrenttable::Dsx1Farendcurrententry : public ydk::Entity
{
    public:
        Dsx1Farendcurrententry();
        ~Dsx1Farendcurrententry();

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

}; // DS1MIB::Dsx1Farendcurrenttable::Dsx1Farendcurrententry


class DS1MIB::Dsx1Farendintervaltable : public ydk::Entity
{
    public:
        Dsx1Farendintervaltable();
        ~Dsx1Farendintervaltable();

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

        class Dsx1Farendintervalentry; //type: DS1MIB::Dsx1Farendintervaltable::Dsx1Farendintervalentry

        std::vector<std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Farendintervaltable::Dsx1Farendintervalentry> > dsx1farendintervalentry;
        
}; // DS1MIB::Dsx1Farendintervaltable


class DS1MIB::Dsx1Farendintervaltable::Dsx1Farendintervalentry : public ydk::Entity
{
    public:
        Dsx1Farendintervalentry();
        ~Dsx1Farendintervalentry();

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

}; // DS1MIB::Dsx1Farendintervaltable::Dsx1Farendintervalentry


class DS1MIB::Dsx1Farendtotaltable : public ydk::Entity
{
    public:
        Dsx1Farendtotaltable();
        ~Dsx1Farendtotaltable();

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

        class Dsx1Farendtotalentry; //type: DS1MIB::Dsx1Farendtotaltable::Dsx1Farendtotalentry

        std::vector<std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Farendtotaltable::Dsx1Farendtotalentry> > dsx1farendtotalentry;
        
}; // DS1MIB::Dsx1Farendtotaltable


class DS1MIB::Dsx1Farendtotaltable::Dsx1Farendtotalentry : public ydk::Entity
{
    public:
        Dsx1Farendtotalentry();
        ~Dsx1Farendtotalentry();

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

}; // DS1MIB::Dsx1Farendtotaltable::Dsx1Farendtotalentry


class DS1MIB::Dsx1Fractable : public ydk::Entity
{
    public:
        Dsx1Fractable();
        ~Dsx1Fractable();

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

        class Dsx1Fracentry; //type: DS1MIB::Dsx1Fractable::Dsx1Fracentry

        std::vector<std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Fractable::Dsx1Fracentry> > dsx1fracentry;
        
}; // DS1MIB::Dsx1Fractable


class DS1MIB::Dsx1Fractable::Dsx1Fracentry : public ydk::Entity
{
    public:
        Dsx1Fracentry();
        ~Dsx1Fracentry();

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

}; // DS1MIB::Dsx1Fractable::Dsx1Fracentry


class DS1MIB::Dsx1Chanmappingtable : public ydk::Entity
{
    public:
        Dsx1Chanmappingtable();
        ~Dsx1Chanmappingtable();

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

        class Dsx1Chanmappingentry; //type: DS1MIB::Dsx1Chanmappingtable::Dsx1Chanmappingentry

        std::vector<std::shared_ptr<cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Chanmappingtable::Dsx1Chanmappingentry> > dsx1chanmappingentry;
        
}; // DS1MIB::Dsx1Chanmappingtable


class DS1MIB::Dsx1Chanmappingtable::Dsx1Chanmappingentry : public ydk::Entity
{
    public:
        Dsx1Chanmappingentry();
        ~Dsx1Chanmappingentry();

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
        //type: int32 (refers to cisco_ios_xe::DS1_MIB::DS1MIB::Dsx1Configtable::Dsx1Configentry::dsx1ds1channelnumber)
        ydk::YLeaf dsx1ds1channelnumber;
        ydk::YLeaf dsx1chanmappedifindex; //type: int32

}; // DS1MIB::Dsx1Chanmappingtable::Dsx1Chanmappingentry

class DS1MIB::Dsx1Configtable::Dsx1Configentry::Dsx1Linetype : public ydk::Enum
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

};

class DS1MIB::Dsx1Configtable::Dsx1Configentry::Dsx1Linecoding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx1JBZS;
        static const ydk::Enum::YLeaf dsx1B8ZS;
        static const ydk::Enum::YLeaf dsx1HDB3;
        static const ydk::Enum::YLeaf dsx1ZBTSI;
        static const ydk::Enum::YLeaf dsx1AMI;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf dsx1B6ZS;

};

class DS1MIB::Dsx1Configtable::Dsx1Configentry::Dsx1Sendcode : public ydk::Enum
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

};

class DS1MIB::Dsx1Configtable::Dsx1Configentry::Dsx1Loopbackconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dsx1NoLoop;
        static const ydk::Enum::YLeaf dsx1PayloadLoop;
        static const ydk::Enum::YLeaf dsx1LineLoop;
        static const ydk::Enum::YLeaf dsx1OtherLoop;
        static const ydk::Enum::YLeaf dsx1InwardLoop;
        static const ydk::Enum::YLeaf dsx1DualLoop;

};

class DS1MIB::Dsx1Configtable::Dsx1Configentry::Dsx1Signalmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf robbedBit;
        static const ydk::Enum::YLeaf bitOriented;
        static const ydk::Enum::YLeaf messageOriented;
        static const ydk::Enum::YLeaf other;

};

class DS1MIB::Dsx1Configtable::Dsx1Configentry::Dsx1Transmitclocksource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loopTiming;
        static const ydk::Enum::YLeaf localTiming;
        static const ydk::Enum::YLeaf throughTiming;

};

class DS1MIB::Dsx1Configtable::Dsx1Configentry::Dsx1Linestatuschangetrapenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class DS1MIB::Dsx1Configtable::Dsx1Configentry::Dsx1Channelization : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabledDs0;
        static const ydk::Enum::YLeaf enabledDs1;

};


}
}

#endif /* _DS1_MIB_ */

