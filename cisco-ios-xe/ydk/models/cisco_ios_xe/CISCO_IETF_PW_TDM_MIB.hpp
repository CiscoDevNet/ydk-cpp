#ifndef _CISCO_IETF_PW_TDM_MIB_
#define _CISCO_IETF_PW_TDM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_PW_TDM_MIB {

class CISCOIETFPWTDMMIB : public ydk::Entity
{
    public:
        CISCOIETFPWTDMMIB();
        ~CISCOIETFPWTDMMIB();

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

        class Cpwctdmobjects; //type: CISCOIETFPWTDMMIB::Cpwctdmobjects
        class Cpwctdmtable; //type: CISCOIETFPWTDMMIB::Cpwctdmtable
        class Cpwctdmcfgtable; //type: CISCOIETFPWTDMMIB::Cpwctdmcfgtable
        class Cpwctdmperfcurrenttable; //type: CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable
        class Cpwctdmperfintervaltable; //type: CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable
        class Cpwctdmperf1Dayintervaltable; //type: CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::Cpwctdmobjects> cpwctdmobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::Cpwctdmtable> cpwctdmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::Cpwctdmcfgtable> cpwctdmcfgtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable> cpwctdmperfcurrenttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable> cpwctdmperfintervaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable> cpwctdmperf1dayintervaltable;
        
}; // CISCOIETFPWTDMMIB


class CISCOIETFPWTDMMIB::Cpwctdmobjects : public ydk::Entity
{
    public:
        Cpwctdmobjects();
        ~Cpwctdmobjects();

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

        ydk::YLeaf cpwctdmcfgindexnext; //type: uint32

}; // CISCOIETFPWTDMMIB::Cpwctdmobjects


class CISCOIETFPWTDMMIB::Cpwctdmtable : public ydk::Entity
{
    public:
        Cpwctdmtable();
        ~Cpwctdmtable();

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

        class Cpwctdmentry; //type: CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry> > cpwctdmentry;
        
}; // CISCOIETFPWTDMMIB::Cpwctdmtable


class CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry : public ydk::Entity
{
    public:
        Cpwctdmentry();
        ~Cpwctdmentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwctdmrate; //type: int32
        ydk::YLeaf cpwctdmifindex; //type: int32
        ydk::YLeaf cpwcgentdmcfgindex; //type: uint32
        ydk::YLeaf cpwcreltdmcfgindex; //type: uint32
        ydk::YLeaf cpwctdmconfigerror; //type: Cpwctdmconfigerror
        ydk::YLeaf cpwctdmtimeelapsed; //type: int32
        ydk::YLeaf cpwctdmvalidintervals; //type: int32
        ydk::YLeaf cpwctdmvaliddayintervals; //type: int32
        ydk::YLeaf cpwctdmcurrentindications; //type: Cpwctdmcurrentindications
        ydk::YLeaf cpwctdmlatchedindications; //type: Cpwctdmlatchedindications
        ydk::YLeaf cpwctdmlastestimestamp; //type: uint32

}; // CISCOIETFPWTDMMIB::Cpwctdmtable::Cpwctdmentry


class CISCOIETFPWTDMMIB::Cpwctdmcfgtable : public ydk::Entity
{
    public:
        Cpwctdmcfgtable();
        ~Cpwctdmcfgtable();

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

        class Cpwctdmcfgentry; //type: CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry> > cpwctdmcfgentry;
        
}; // CISCOIETFPWTDMMIB::Cpwctdmcfgtable


class CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry : public ydk::Entity
{
    public:
        Cpwctdmcfgentry();
        ~Cpwctdmcfgentry();

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

        ydk::YLeaf cpwctdmcfgindex; //type: uint32
        ydk::YLeaf cpwctdmcfgconferr; //type: Cpwctdmcfgconferr
        ydk::YLeaf cpwctdmcfgpayloadsize; //type: uint32
        ydk::YLeaf cpwctdmcfgpktreorder; //type: boolean
        ydk::YLeaf cpwctdmcfgrtphdrused; //type: boolean
        ydk::YLeaf cpwctdmcfgjtrbfrdepth; //type: uint32
        ydk::YLeaf cpwctdmcfgpayloadsuppression; //type: Cpwctdmcfgpayloadsuppression
        ydk::YLeaf cpwctdmcfgconsecpktsinsynch; //type: uint32
        ydk::YLeaf cpwctdmcfgconsecmisspktsoutsynch; //type: uint32
        ydk::YLeaf cpwctdmcfgsetup2synchtimeout; //type: uint32
        ydk::YLeaf cpwctdmcfgpktreplacepolicy; //type: Cpwctdmcfgpktreplacepolicy
        ydk::YLeaf cpwctdmcfgavepktlosstimewindow; //type: int32
        ydk::YLeaf cpwctdmcfgexcessivepktlossthreshold; //type: uint32
        ydk::YLeaf cpwctdmcfgalarmthreshold; //type: uint32
        ydk::YLeaf cpwctdmcfgclearalarmthreshold; //type: uint32
        ydk::YLeaf cpwctdmcfgmissingpktstoses; //type: uint32
        ydk::YLeaf cpwctdmcfgtimestampmode; //type: Cpwctdmcfgtimestampmode
        ydk::YLeaf cpwctdmcfgstoragetype; //type: StorageType
        ydk::YLeaf cpwctdmcfgrowstatus; //type: RowStatus
        class Cpwctdmcfgpayloadsuppression;
        class Cpwctdmcfgpktreplacepolicy;
        class Cpwctdmcfgtimestampmode;

}; // CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry


class CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable : public ydk::Entity
{
    public:
        Cpwctdmperfcurrenttable();
        ~Cpwctdmperfcurrenttable();

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

        class Cpwctdmperfcurrententry; //type: CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry> > cpwctdmperfcurrententry;
        
}; // CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable


class CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry : public ydk::Entity
{
    public:
        Cpwctdmperfcurrententry();
        ~Cpwctdmperfcurrententry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwctdmperfcurrentmissingpkts; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentpktsreorder; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentjtrbfrunderruns; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentmisorderdropped; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentmalformedpkt; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentess; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentsess; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentuass; //type: uint32
        ydk::YLeaf cpwctdmperfcurrentfc; //type: uint32

}; // CISCOIETFPWTDMMIB::Cpwctdmperfcurrenttable::Cpwctdmperfcurrententry


class CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable : public ydk::Entity
{
    public:
        Cpwctdmperfintervaltable();
        ~Cpwctdmperfintervaltable();

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

        class Cpwctdmperfintervalentry; //type: CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry> > cpwctdmperfintervalentry;
        
}; // CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable


class CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry : public ydk::Entity
{
    public:
        Cpwctdmperfintervalentry();
        ~Cpwctdmperfintervalentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwctdmperfintervalnumber; //type: uint32
        ydk::YLeaf cpwctdmperfintervalvaliddata; //type: boolean
        ydk::YLeaf cpwctdmperfintervalduration; //type: uint32
        ydk::YLeaf cpwctdmperfintervalmissingpkts; //type: uint32
        ydk::YLeaf cpwctdmperfintervalpktsreorder; //type: uint32
        ydk::YLeaf cpwctdmperfintervaljtrbfrunderruns; //type: uint32
        ydk::YLeaf cpwctdmperfintervalmisorderdropped; //type: uint32
        ydk::YLeaf cpwctdmperfintervalmalformedpkt; //type: uint32
        ydk::YLeaf cpwctdmperfintervaless; //type: uint32
        ydk::YLeaf cpwctdmperfintervalsess; //type: uint32
        ydk::YLeaf cpwctdmperfintervaluass; //type: uint32
        ydk::YLeaf cpwctdmperfintervalfc; //type: uint32

}; // CISCOIETFPWTDMMIB::Cpwctdmperfintervaltable::Cpwctdmperfintervalentry


class CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable : public ydk::Entity
{
    public:
        Cpwctdmperf1Dayintervaltable();
        ~Cpwctdmperf1Dayintervaltable();

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

        class Cpwctdmperf1Dayintervalentry; //type: CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_TDM_MIB::CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry> > cpwctdmperf1dayintervalentry;
        
}; // CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable


class CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry : public ydk::Entity
{
    public:
        Cpwctdmperf1Dayintervalentry();
        ~Cpwctdmperf1Dayintervalentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwctdmperf1dayintervalnumber; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalvaliddata; //type: boolean
        ydk::YLeaf cpwctdmperf1dayintervalduration; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalmissingpkts; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalpktsreorder; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervaljtrbfrunderruns; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalmisorderdropped; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalmalformedpkt; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervaless; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalsess; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervaluass; //type: uint32
        ydk::YLeaf cpwctdmperf1dayintervalfc; //type: uint32

}; // CISCOIETFPWTDMMIB::Cpwctdmperf1Dayintervaltable::Cpwctdmperf1Dayintervalentry

class CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::Cpwctdmcfgpayloadsuppression : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::Cpwctdmcfgpktreplacepolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ais;
        static const ydk::Enum::YLeaf implementationSpecific;

};

class CISCOIETFPWTDMMIB::Cpwctdmcfgtable::Cpwctdmcfgentry::Cpwctdmcfgtimestampmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf differential;

};


}
}

#endif /* _CISCO_IETF_PW_TDM_MIB_ */

