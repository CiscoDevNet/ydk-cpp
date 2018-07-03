#ifndef _CISCO_HSRP_EXT_MIB_
#define _CISCO_HSRP_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_HSRP_EXT_MIB {

class CISCOHSRPEXTMIB : public ydk::Entity
{
    public:
        CISCOHSRPEXTMIB();
        ~CISCOHSRPEXTMIB();

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

        class CHsrpExtIfTrackedTable; //type: CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable
        class CHsrpExtSecAddrTable; //type: CISCOHSRPEXTMIB::CHsrpExtSecAddrTable
        class CHsrpExtIfStandbyTable; //type: CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable
        class CHsrpExtIfTable; //type: CISCOHSRPEXTMIB::CHsrpExtIfTable

        std::shared_ptr<cisco_ios_xe::CISCO_HSRP_EXT_MIB::CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable> chsrpextiftrackedtable;
        std::shared_ptr<cisco_ios_xe::CISCO_HSRP_EXT_MIB::CISCOHSRPEXTMIB::CHsrpExtSecAddrTable> chsrpextsecaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_HSRP_EXT_MIB::CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable> chsrpextifstandbytable;
        std::shared_ptr<cisco_ios_xe::CISCO_HSRP_EXT_MIB::CISCOHSRPEXTMIB::CHsrpExtIfTable> chsrpextiftable;
        
}; // CISCOHSRPEXTMIB


class CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable : public ydk::Entity
{
    public:
        CHsrpExtIfTrackedTable();
        ~CHsrpExtIfTrackedTable();

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

        class CHsrpExtIfTrackedEntry; //type: CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry

        ydk::YList chsrpextiftrackedentry;
        
}; // CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable


class CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry : public ydk::Entity
{
    public:
        CHsrpExtIfTrackedEntry();
        ~CHsrpExtIfTrackedEntry();

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
        //type: uint32 (refers to cisco_ios_xe::CISCO_HSRP_MIB::CISCOHSRPMIB::CHsrpGrpTable::CHsrpGrpEntry::chsrpgrpnumber)
        ydk::YLeaf chsrpgrpnumber;
        ydk::YLeaf chsrpextiftracked; //type: int32
        ydk::YLeaf chsrpextiftrackedpriority; //type: uint32
        ydk::YLeaf chsrpextiftrackedrowstatus; //type: RowStatus
        ydk::YLeaf chsrpextiftrackedipnone; //type: boolean

}; // CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry


class CISCOHSRPEXTMIB::CHsrpExtSecAddrTable : public ydk::Entity
{
    public:
        CHsrpExtSecAddrTable();
        ~CHsrpExtSecAddrTable();

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

        class CHsrpExtSecAddrEntry; //type: CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry

        ydk::YList chsrpextsecaddrentry;
        
}; // CISCOHSRPEXTMIB::CHsrpExtSecAddrTable


class CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry : public ydk::Entity
{
    public:
        CHsrpExtSecAddrEntry();
        ~CHsrpExtSecAddrEntry();

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
        //type: uint32 (refers to cisco_ios_xe::CISCO_HSRP_MIB::CISCOHSRPMIB::CHsrpGrpTable::CHsrpGrpEntry::chsrpgrpnumber)
        ydk::YLeaf chsrpgrpnumber;
        ydk::YLeaf chsrpextsecaddraddress; //type: string
        ydk::YLeaf chsrpextsecaddrrowstatus; //type: RowStatus

}; // CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry


class CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable : public ydk::Entity
{
    public:
        CHsrpExtIfStandbyTable();
        ~CHsrpExtIfStandbyTable();

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

        class CHsrpExtIfStandbyEntry; //type: CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry

        ydk::YList chsrpextifstandbyentry;
        
}; // CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable


class CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry : public ydk::Entity
{
    public:
        CHsrpExtIfStandbyEntry();
        ~CHsrpExtIfStandbyEntry();

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
        //type: uint32 (refers to cisco_ios_xe::CISCO_HSRP_MIB::CISCOHSRPMIB::CHsrpGrpTable::CHsrpGrpEntry::chsrpgrpnumber)
        ydk::YLeaf chsrpgrpnumber;
        ydk::YLeaf chsrpextifstandbyindex; //type: uint32
        ydk::YLeaf chsrpextifstandbydestaddrtype; //type: InetAddressType
        ydk::YLeaf chsrpextifstandbydestaddr; //type: binary
        ydk::YLeaf chsrpextifstandbysourceaddrtype; //type: InetAddressType
        ydk::YLeaf chsrpextifstandbysourceaddr; //type: binary
        ydk::YLeaf chsrpextifstandbyrowstatus; //type: RowStatus

}; // CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry


class CISCOHSRPEXTMIB::CHsrpExtIfTable : public ydk::Entity
{
    public:
        CHsrpExtIfTable();
        ~CHsrpExtIfTable();

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

        class CHsrpExtIfEntry; //type: CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry

        ydk::YList chsrpextifentry;
        
}; // CISCOHSRPEXTMIB::CHsrpExtIfTable


class CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry : public ydk::Entity
{
    public:
        CHsrpExtIfEntry();
        ~CHsrpExtIfEntry();

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
        ydk::YLeaf chsrpextifusebia; //type: boolean
        ydk::YLeaf chsrpextifrowstatus; //type: RowStatus

}; // CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry


}
}

#endif /* _CISCO_HSRP_EXT_MIB_ */

