#ifndef _TOKEN_RING_RMON_MIB_
#define _TOKEN_RING_RMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace TOKEN_RING_RMON_MIB {

class TOKENRINGRMONMIB : public ydk::Entity
{
    public:
        TOKENRINGRMONMIB();
        ~TOKENRINGRMONMIB();

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

        class Tokenringmlstatstable; //type: TOKENRINGRMONMIB::Tokenringmlstatstable
        class Tokenringpstatstable; //type: TOKENRINGRMONMIB::Tokenringpstatstable
        class Tokenringmlhistorytable; //type: TOKENRINGRMONMIB::Tokenringmlhistorytable
        class Tokenringphistorytable; //type: TOKENRINGRMONMIB::Tokenringphistorytable
        class Ringstationcontroltable; //type: TOKENRINGRMONMIB::Ringstationcontroltable
        class Ringstationtable; //type: TOKENRINGRMONMIB::Ringstationtable
        class Ringstationordertable; //type: TOKENRINGRMONMIB::Ringstationordertable
        class Ringstationconfigcontroltable; //type: TOKENRINGRMONMIB::Ringstationconfigcontroltable
        class Ringstationconfigtable; //type: TOKENRINGRMONMIB::Ringstationconfigtable
        class Sourceroutingstatstable; //type: TOKENRINGRMONMIB::Sourceroutingstatstable

        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Tokenringmlstatstable> tokenringmlstatstable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Tokenringpstatstable> tokenringpstatstable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Tokenringmlhistorytable> tokenringmlhistorytable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Tokenringphistorytable> tokenringphistorytable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Ringstationcontroltable> ringstationcontroltable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Ringstationtable> ringstationtable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Ringstationordertable> ringstationordertable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Ringstationconfigcontroltable> ringstationconfigcontroltable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Ringstationconfigtable> ringstationconfigtable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Sourceroutingstatstable> sourceroutingstatstable;
        
}; // TOKENRINGRMONMIB


class TOKENRINGRMONMIB::Tokenringmlstatstable : public ydk::Entity
{
    public:
        Tokenringmlstatstable();
        ~Tokenringmlstatstable();

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

        class Tokenringmlstatsentry; //type: TOKENRINGRMONMIB::Tokenringmlstatstable::Tokenringmlstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Tokenringmlstatstable::Tokenringmlstatsentry> > tokenringmlstatsentry;
        
}; // TOKENRINGRMONMIB::Tokenringmlstatstable


class TOKENRINGRMONMIB::Tokenringmlstatstable::Tokenringmlstatsentry : public ydk::Entity
{
    public:
        Tokenringmlstatsentry();
        ~Tokenringmlstatsentry();

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

        ydk::YLeaf tokenringmlstatsindex; //type: int32
        ydk::YLeaf tokenringmlstatsdatasource; //type: string
        ydk::YLeaf tokenringmlstatsdropevents; //type: uint32
        ydk::YLeaf tokenringmlstatsmacoctets; //type: uint32
        ydk::YLeaf tokenringmlstatsmacpkts; //type: uint32
        ydk::YLeaf tokenringmlstatsringpurgeevents; //type: uint32
        ydk::YLeaf tokenringmlstatsringpurgepkts; //type: uint32
        ydk::YLeaf tokenringmlstatsbeaconevents; //type: uint32
        ydk::YLeaf tokenringmlstatsbeacontime; //type: int32
        ydk::YLeaf tokenringmlstatsbeaconpkts; //type: uint32
        ydk::YLeaf tokenringmlstatsclaimtokenevents; //type: uint32
        ydk::YLeaf tokenringmlstatsclaimtokenpkts; //type: uint32
        ydk::YLeaf tokenringmlstatsnaunchanges; //type: uint32
        ydk::YLeaf tokenringmlstatslineerrors; //type: uint32
        ydk::YLeaf tokenringmlstatsinternalerrors; //type: uint32
        ydk::YLeaf tokenringmlstatsbursterrors; //type: uint32
        ydk::YLeaf tokenringmlstatsacerrors; //type: uint32
        ydk::YLeaf tokenringmlstatsaborterrors; //type: uint32
        ydk::YLeaf tokenringmlstatslostframeerrors; //type: uint32
        ydk::YLeaf tokenringmlstatscongestionerrors; //type: uint32
        ydk::YLeaf tokenringmlstatsframecopiederrors; //type: uint32
        ydk::YLeaf tokenringmlstatsfrequencyerrors; //type: uint32
        ydk::YLeaf tokenringmlstatstokenerrors; //type: uint32
        ydk::YLeaf tokenringmlstatssofterrorreports; //type: uint32
        ydk::YLeaf tokenringmlstatsringpollevents; //type: uint32
        ydk::YLeaf tokenringmlstatsowner; //type: string
        ydk::YLeaf tokenringmlstatsstatus; //type: EntryStatus
        ydk::YLeaf tokenringmlstatsdroppedframes; //type: uint32
        ydk::YLeaf tokenringmlstatscreatetime; //type: uint32

}; // TOKENRINGRMONMIB::Tokenringmlstatstable::Tokenringmlstatsentry


class TOKENRINGRMONMIB::Tokenringpstatstable : public ydk::Entity
{
    public:
        Tokenringpstatstable();
        ~Tokenringpstatstable();

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

        class Tokenringpstatsentry; //type: TOKENRINGRMONMIB::Tokenringpstatstable::Tokenringpstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Tokenringpstatstable::Tokenringpstatsentry> > tokenringpstatsentry;
        
}; // TOKENRINGRMONMIB::Tokenringpstatstable


class TOKENRINGRMONMIB::Tokenringpstatstable::Tokenringpstatsentry : public ydk::Entity
{
    public:
        Tokenringpstatsentry();
        ~Tokenringpstatsentry();

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

        ydk::YLeaf tokenringpstatsindex; //type: int32
        ydk::YLeaf tokenringpstatsdatasource; //type: string
        ydk::YLeaf tokenringpstatsdropevents; //type: uint32
        ydk::YLeaf tokenringpstatsdataoctets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts; //type: uint32
        ydk::YLeaf tokenringpstatsdatabroadcastpkts; //type: uint32
        ydk::YLeaf tokenringpstatsdatamulticastpkts; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts18to63octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts64to127octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts128to255octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts256to511octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts512to1023octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts1024to2047octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts2048to4095octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts4096to8191octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts8192to18000octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapktsgreaterthan18000octets; //type: uint32
        ydk::YLeaf tokenringpstatsowner; //type: string
        ydk::YLeaf tokenringpstatsstatus; //type: EntryStatus
        ydk::YLeaf tokenringpstatsdroppedframes; //type: uint32
        ydk::YLeaf tokenringpstatscreatetime; //type: uint32

}; // TOKENRINGRMONMIB::Tokenringpstatstable::Tokenringpstatsentry


class TOKENRINGRMONMIB::Tokenringmlhistorytable : public ydk::Entity
{
    public:
        Tokenringmlhistorytable();
        ~Tokenringmlhistorytable();

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

        class Tokenringmlhistoryentry; //type: TOKENRINGRMONMIB::Tokenringmlhistorytable::Tokenringmlhistoryentry

        std::vector<std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Tokenringmlhistorytable::Tokenringmlhistoryentry> > tokenringmlhistoryentry;
        
}; // TOKENRINGRMONMIB::Tokenringmlhistorytable


class TOKENRINGRMONMIB::Tokenringmlhistorytable::Tokenringmlhistoryentry : public ydk::Entity
{
    public:
        Tokenringmlhistoryentry();
        ~Tokenringmlhistoryentry();

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

        ydk::YLeaf tokenringmlhistoryindex; //type: int32
        ydk::YLeaf tokenringmlhistorysampleindex; //type: int32
        ydk::YLeaf tokenringmlhistoryintervalstart; //type: uint32
        ydk::YLeaf tokenringmlhistorydropevents; //type: uint32
        ydk::YLeaf tokenringmlhistorymacoctets; //type: uint32
        ydk::YLeaf tokenringmlhistorymacpkts; //type: uint32
        ydk::YLeaf tokenringmlhistoryringpurgeevents; //type: uint32
        ydk::YLeaf tokenringmlhistoryringpurgepkts; //type: uint32
        ydk::YLeaf tokenringmlhistorybeaconevents; //type: uint32
        ydk::YLeaf tokenringmlhistorybeacontime; //type: int32
        ydk::YLeaf tokenringmlhistorybeaconpkts; //type: uint32
        ydk::YLeaf tokenringmlhistoryclaimtokenevents; //type: uint32
        ydk::YLeaf tokenringmlhistoryclaimtokenpkts; //type: uint32
        ydk::YLeaf tokenringmlhistorynaunchanges; //type: uint32
        ydk::YLeaf tokenringmlhistorylineerrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryinternalerrors; //type: uint32
        ydk::YLeaf tokenringmlhistorybursterrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryacerrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryaborterrors; //type: uint32
        ydk::YLeaf tokenringmlhistorylostframeerrors; //type: uint32
        ydk::YLeaf tokenringmlhistorycongestionerrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryframecopiederrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryfrequencyerrors; //type: uint32
        ydk::YLeaf tokenringmlhistorytokenerrors; //type: uint32
        ydk::YLeaf tokenringmlhistorysofterrorreports; //type: uint32
        ydk::YLeaf tokenringmlhistoryringpollevents; //type: uint32
        ydk::YLeaf tokenringmlhistoryactivestations; //type: int32

}; // TOKENRINGRMONMIB::Tokenringmlhistorytable::Tokenringmlhistoryentry


class TOKENRINGRMONMIB::Tokenringphistorytable : public ydk::Entity
{
    public:
        Tokenringphistorytable();
        ~Tokenringphistorytable();

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

        class Tokenringphistoryentry; //type: TOKENRINGRMONMIB::Tokenringphistorytable::Tokenringphistoryentry

        std::vector<std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Tokenringphistorytable::Tokenringphistoryentry> > tokenringphistoryentry;
        
}; // TOKENRINGRMONMIB::Tokenringphistorytable


class TOKENRINGRMONMIB::Tokenringphistorytable::Tokenringphistoryentry : public ydk::Entity
{
    public:
        Tokenringphistoryentry();
        ~Tokenringphistoryentry();

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

        ydk::YLeaf tokenringphistoryindex; //type: int32
        ydk::YLeaf tokenringphistorysampleindex; //type: int32
        ydk::YLeaf tokenringphistoryintervalstart; //type: uint32
        ydk::YLeaf tokenringphistorydropevents; //type: uint32
        ydk::YLeaf tokenringphistorydataoctets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts; //type: uint32
        ydk::YLeaf tokenringphistorydatabroadcastpkts; //type: uint32
        ydk::YLeaf tokenringphistorydatamulticastpkts; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts18to63octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts64to127octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts128to255octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts256to511octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts512to1023octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts1024to2047octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts2048to4095octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts4096to8191octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts8192to18000octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapktsgreaterthan18000octets; //type: uint32

}; // TOKENRINGRMONMIB::Tokenringphistorytable::Tokenringphistoryentry


class TOKENRINGRMONMIB::Ringstationcontroltable : public ydk::Entity
{
    public:
        Ringstationcontroltable();
        ~Ringstationcontroltable();

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

        class Ringstationcontrolentry; //type: TOKENRINGRMONMIB::Ringstationcontroltable::Ringstationcontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Ringstationcontroltable::Ringstationcontrolentry> > ringstationcontrolentry;
        
}; // TOKENRINGRMONMIB::Ringstationcontroltable


class TOKENRINGRMONMIB::Ringstationcontroltable::Ringstationcontrolentry : public ydk::Entity
{
    public:
        Ringstationcontrolentry();
        ~Ringstationcontrolentry();

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

        ydk::YLeaf ringstationcontrolifindex; //type: int32
        ydk::YLeaf ringstationcontroltablesize; //type: int32
        ydk::YLeaf ringstationcontrolactivestations; //type: int32
        ydk::YLeaf ringstationcontrolringstate; //type: Ringstationcontrolringstate
        ydk::YLeaf ringstationcontrolbeaconsender; //type: binary
        ydk::YLeaf ringstationcontrolbeaconnaun; //type: binary
        ydk::YLeaf ringstationcontrolactivemonitor; //type: binary
        ydk::YLeaf ringstationcontrolorderchanges; //type: uint32
        ydk::YLeaf ringstationcontrolowner; //type: string
        ydk::YLeaf ringstationcontrolstatus; //type: EntryStatus
        ydk::YLeaf ringstationcontroldroppedframes; //type: uint32
        ydk::YLeaf ringstationcontrolcreatetime; //type: uint32
        class Ringstationcontrolringstate;

}; // TOKENRINGRMONMIB::Ringstationcontroltable::Ringstationcontrolentry


class TOKENRINGRMONMIB::Ringstationtable : public ydk::Entity
{
    public:
        Ringstationtable();
        ~Ringstationtable();

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

        class Ringstationentry; //type: TOKENRINGRMONMIB::Ringstationtable::Ringstationentry

        std::vector<std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Ringstationtable::Ringstationentry> > ringstationentry;
        
}; // TOKENRINGRMONMIB::Ringstationtable


class TOKENRINGRMONMIB::Ringstationtable::Ringstationentry : public ydk::Entity
{
    public:
        Ringstationentry();
        ~Ringstationentry();

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

        ydk::YLeaf ringstationifindex; //type: int32
        ydk::YLeaf ringstationmacaddress; //type: binary
        ydk::YLeaf ringstationlastnaun; //type: binary
        ydk::YLeaf ringstationstationstatus; //type: Ringstationstationstatus
        ydk::YLeaf ringstationlastentertime; //type: uint32
        ydk::YLeaf ringstationlastexittime; //type: uint32
        ydk::YLeaf ringstationduplicateaddresses; //type: uint32
        ydk::YLeaf ringstationinlineerrors; //type: uint32
        ydk::YLeaf ringstationoutlineerrors; //type: uint32
        ydk::YLeaf ringstationinternalerrors; //type: uint32
        ydk::YLeaf ringstationinbursterrors; //type: uint32
        ydk::YLeaf ringstationoutbursterrors; //type: uint32
        ydk::YLeaf ringstationacerrors; //type: uint32
        ydk::YLeaf ringstationaborterrors; //type: uint32
        ydk::YLeaf ringstationlostframeerrors; //type: uint32
        ydk::YLeaf ringstationcongestionerrors; //type: uint32
        ydk::YLeaf ringstationframecopiederrors; //type: uint32
        ydk::YLeaf ringstationfrequencyerrors; //type: uint32
        ydk::YLeaf ringstationtokenerrors; //type: uint32
        ydk::YLeaf ringstationinbeaconerrors; //type: uint32
        ydk::YLeaf ringstationoutbeaconerrors; //type: uint32
        ydk::YLeaf ringstationinsertions; //type: uint32
        class Ringstationstationstatus;

}; // TOKENRINGRMONMIB::Ringstationtable::Ringstationentry


class TOKENRINGRMONMIB::Ringstationordertable : public ydk::Entity
{
    public:
        Ringstationordertable();
        ~Ringstationordertable();

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

        class Ringstationorderentry; //type: TOKENRINGRMONMIB::Ringstationordertable::Ringstationorderentry

        std::vector<std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Ringstationordertable::Ringstationorderentry> > ringstationorderentry;
        
}; // TOKENRINGRMONMIB::Ringstationordertable


class TOKENRINGRMONMIB::Ringstationordertable::Ringstationorderentry : public ydk::Entity
{
    public:
        Ringstationorderentry();
        ~Ringstationorderentry();

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

        ydk::YLeaf ringstationorderifindex; //type: int32
        ydk::YLeaf ringstationorderorderindex; //type: int32
        ydk::YLeaf ringstationordermacaddress; //type: binary

}; // TOKENRINGRMONMIB::Ringstationordertable::Ringstationorderentry


class TOKENRINGRMONMIB::Ringstationconfigcontroltable : public ydk::Entity
{
    public:
        Ringstationconfigcontroltable();
        ~Ringstationconfigcontroltable();

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

        class Ringstationconfigcontrolentry; //type: TOKENRINGRMONMIB::Ringstationconfigcontroltable::Ringstationconfigcontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Ringstationconfigcontroltable::Ringstationconfigcontrolentry> > ringstationconfigcontrolentry;
        
}; // TOKENRINGRMONMIB::Ringstationconfigcontroltable


class TOKENRINGRMONMIB::Ringstationconfigcontroltable::Ringstationconfigcontrolentry : public ydk::Entity
{
    public:
        Ringstationconfigcontrolentry();
        ~Ringstationconfigcontrolentry();

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

        ydk::YLeaf ringstationconfigcontrolifindex; //type: int32
        ydk::YLeaf ringstationconfigcontrolmacaddress; //type: binary
        ydk::YLeaf ringstationconfigcontrolremove; //type: Ringstationconfigcontrolremove
        ydk::YLeaf ringstationconfigcontrolupdatestats; //type: Ringstationconfigcontrolupdatestats
        class Ringstationconfigcontrolremove;
        class Ringstationconfigcontrolupdatestats;

}; // TOKENRINGRMONMIB::Ringstationconfigcontroltable::Ringstationconfigcontrolentry


class TOKENRINGRMONMIB::Ringstationconfigtable : public ydk::Entity
{
    public:
        Ringstationconfigtable();
        ~Ringstationconfigtable();

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

        class Ringstationconfigentry; //type: TOKENRINGRMONMIB::Ringstationconfigtable::Ringstationconfigentry

        std::vector<std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Ringstationconfigtable::Ringstationconfigentry> > ringstationconfigentry;
        
}; // TOKENRINGRMONMIB::Ringstationconfigtable


class TOKENRINGRMONMIB::Ringstationconfigtable::Ringstationconfigentry : public ydk::Entity
{
    public:
        Ringstationconfigentry();
        ~Ringstationconfigentry();

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

        ydk::YLeaf ringstationconfigifindex; //type: int32
        ydk::YLeaf ringstationconfigmacaddress; //type: binary
        ydk::YLeaf ringstationconfigupdatetime; //type: uint32
        ydk::YLeaf ringstationconfiglocation; //type: binary
        ydk::YLeaf ringstationconfigmicrocode; //type: binary
        ydk::YLeaf ringstationconfiggroupaddress; //type: binary
        ydk::YLeaf ringstationconfigfunctionaladdress; //type: binary

}; // TOKENRINGRMONMIB::Ringstationconfigtable::Ringstationconfigentry


class TOKENRINGRMONMIB::Sourceroutingstatstable : public ydk::Entity
{
    public:
        Sourceroutingstatstable();
        ~Sourceroutingstatstable();

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

        class Sourceroutingstatsentry; //type: TOKENRINGRMONMIB::Sourceroutingstatstable::Sourceroutingstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::Sourceroutingstatstable::Sourceroutingstatsentry> > sourceroutingstatsentry;
        
}; // TOKENRINGRMONMIB::Sourceroutingstatstable


class TOKENRINGRMONMIB::Sourceroutingstatstable::Sourceroutingstatsentry : public ydk::Entity
{
    public:
        Sourceroutingstatsentry();
        ~Sourceroutingstatsentry();

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

        ydk::YLeaf sourceroutingstatsifindex; //type: int32
        ydk::YLeaf sourceroutingstatsringnumber; //type: int32
        ydk::YLeaf sourceroutingstatsinframes; //type: uint32
        ydk::YLeaf sourceroutingstatsoutframes; //type: uint32
        ydk::YLeaf sourceroutingstatsthroughframes; //type: uint32
        ydk::YLeaf sourceroutingstatsallroutesbroadcastframes; //type: uint32
        ydk::YLeaf sourceroutingstatssingleroutebroadcastframes; //type: uint32
        ydk::YLeaf sourceroutingstatsinoctets; //type: uint32
        ydk::YLeaf sourceroutingstatsoutoctets; //type: uint32
        ydk::YLeaf sourceroutingstatsthroughoctets; //type: uint32
        ydk::YLeaf sourceroutingstatsallroutesbroadcastoctets; //type: uint32
        ydk::YLeaf sourceroutingstatssingleroutesbroadcastoctets; //type: uint32
        ydk::YLeaf sourceroutingstatslocalllcframes; //type: uint32
        ydk::YLeaf sourceroutingstats1hopframes; //type: uint32
        ydk::YLeaf sourceroutingstats2hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats3hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats4hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats5hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats6hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats7hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats8hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstatsmorethan8hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstatsowner; //type: string
        ydk::YLeaf sourceroutingstatsstatus; //type: EntryStatus
        ydk::YLeaf sourceroutingstatsdroppedframes; //type: uint32
        ydk::YLeaf sourceroutingstatscreatetime; //type: uint32

}; // TOKENRINGRMONMIB::Sourceroutingstatstable::Sourceroutingstatsentry

class EntryStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf valid;
        static const ydk::Enum::YLeaf createRequest;
        static const ydk::Enum::YLeaf underCreation;
        static const ydk::Enum::YLeaf invalid;

};

class TOKENRINGRMONMIB::Ringstationcontroltable::Ringstationcontrolentry::Ringstationcontrolringstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normalOperation;
        static const ydk::Enum::YLeaf ringPurgeState;
        static const ydk::Enum::YLeaf claimTokenState;
        static const ydk::Enum::YLeaf beaconFrameStreamingState;
        static const ydk::Enum::YLeaf beaconBitStreamingState;
        static const ydk::Enum::YLeaf beaconRingSignalLossState;
        static const ydk::Enum::YLeaf beaconSetRecoveryModeState;

};

class TOKENRINGRMONMIB::Ringstationtable::Ringstationentry::Ringstationstationstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf forcedRemoval;

};

class TOKENRINGRMONMIB::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::Ringstationconfigcontrolremove : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stable;
        static const ydk::Enum::YLeaf removing;

};

class TOKENRINGRMONMIB::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::Ringstationconfigcontrolupdatestats : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stable;
        static const ydk::Enum::YLeaf updating;

};


}
}

#endif /* _TOKEN_RING_RMON_MIB_ */

