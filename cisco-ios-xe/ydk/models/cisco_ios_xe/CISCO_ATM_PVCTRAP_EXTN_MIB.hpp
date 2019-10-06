#ifndef _CISCO_ATM_PVCTRAP_EXTN_MIB_
#define _CISCO_ATM_PVCTRAP_EXTN_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ATM_PVCTRAP_EXTN_MIB {

class CISCOATMPVCTRAPEXTNMIB : public ydk::Entity
{
    public:
        CISCOATMPVCTRAPEXTNMIB();
        ~CISCOATMPVCTRAPEXTNMIB();

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

        class CatmCurStatChangePVclTable; //type: CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable
        class CatmStatusChangePVclRangeTable; //type: CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable
        class CatmSegCCStatusChPVclRangeTable; //type: CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable
        class CatmEndCCStatusChPVclRangeTable; //type: CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable
        class CatmAISRDIStatusChPVclRangeTable; //type: CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable
        class CatmDownPVclRangeTable; //type: CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable
        class CatmCurStatusUpPVclTable; //type: CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable
        class CatmStatusUpPVclRangeTable; //type: CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable
        class CatmSegCCStatusUpPVclRangeTable; //type: CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable
        class CatmEndCCStatusUpPVclRangeTable; //type: CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable
        class CatmAISRDIStatusUpPVclRangeTable; //type: CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable
        class CatmUpPVclRangeTable; //type: CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable

        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable> catmcurstatchangepvcltable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable> catmstatuschangepvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable> catmsegccstatuschpvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable> catmendccstatuschpvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable> catmaisrdistatuschpvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable> catmdownpvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable> catmcurstatusuppvcltable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable> catmstatusuppvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable> catmsegccstatusuppvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable> catmendccstatusuppvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable> catmaisrdistatusuppvclrangetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable> catmuppvclrangetable;
        
}; // CISCOATMPVCTRAPEXTNMIB


class CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable : public ydk::Entity
{
    public:
        CatmCurStatChangePVclTable();
        ~CatmCurStatChangePVclTable();

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

        class CatmCurStatChangePVclEntry; //type: CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry

        ydk::YList catmcurstatchangepvclentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable


class CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry : public ydk::Entity
{
    public:
        CatmCurStatChangePVclEntry();
        ~CatmCurStatChangePVclEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf catmpvclstatustransition; //type: uint32
        ydk::YLeaf catmpvclstatuschangestart; //type: uint32
        ydk::YLeaf catmpvclstatuschangeend; //type: uint32
        ydk::YLeaf catmpvclsegccstatustransition; //type: uint32
        ydk::YLeaf catmpvclsegccstatuschangestart; //type: uint32
        ydk::YLeaf catmpvclsegccstatuschangeend; //type: uint32
        ydk::YLeaf catmpvclendccstatustransition; //type: uint32
        ydk::YLeaf catmpvclendccstatuschangestart; //type: uint32
        ydk::YLeaf catmpvclendccstatuschangeend; //type: uint32
        ydk::YLeaf catmpvclaisrdistatustransition; //type: uint32
        ydk::YLeaf catmpvclaisrdistatuschangestart; //type: uint32
        ydk::YLeaf catmpvclaisrdistatuschangeend; //type: uint32
        ydk::YLeaf catmpvclcurfailtime; //type: uint32
        ydk::YLeaf catmpvclprevrecovertime; //type: uint32
        ydk::YLeaf catmpvclfailurereason; //type: CatmOAMFailureType

}; // CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry


class CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable : public ydk::Entity
{
    public:
        CatmStatusChangePVclRangeTable();
        ~CatmStatusChangePVclRangeTable();

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

        class CatmStatusChangePVclRangeEntry; //type: CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry

        ydk::YList catmstatuschangepvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable


class CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry : public ydk::Entity
{
    public:
        CatmStatusChangePVclRangeEntry();
        ~CatmStatusChangePVclRangeEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        ydk::YLeaf catmstatuschangepvclrangeindex; //type: int32
        ydk::YLeaf catmpvcllowerrangevalue; //type: int32
        ydk::YLeaf catmpvclhigherrangevalue; //type: int32
        ydk::YLeaf catmpvclrangestatuschangestart; //type: uint32
        ydk::YLeaf catmpvclrangestatuschangeend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry


class CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable : public ydk::Entity
{
    public:
        CatmSegCCStatusChPVclRangeTable();
        ~CatmSegCCStatusChPVclRangeTable();

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

        class CatmSegCCStatusChPVclRangeEntry; //type: CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry

        ydk::YList catmsegccstatuschpvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable


class CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry : public ydk::Entity
{
    public:
        CatmSegCCStatusChPVclRangeEntry();
        ~CatmSegCCStatusChPVclRangeEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclsegcclowerrangevalue; //type: int32
        ydk::YLeaf catmpvclsegcchigherrangevalue; //type: int32
        ydk::YLeaf catmpvclsegccrangestatuschstart; //type: uint32
        ydk::YLeaf catmpvclsegccrangestatuschend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry


class CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable : public ydk::Entity
{
    public:
        CatmEndCCStatusChPVclRangeTable();
        ~CatmEndCCStatusChPVclRangeTable();

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

        class CatmEndCCStatusChPVclRangeEntry; //type: CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry

        ydk::YList catmendccstatuschpvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable


class CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry : public ydk::Entity
{
    public:
        CatmEndCCStatusChPVclRangeEntry();
        ~CatmEndCCStatusChPVclRangeEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclendcclowerrangevalue; //type: int32
        ydk::YLeaf catmpvclendcchigherrangevalue; //type: int32
        ydk::YLeaf catmpvclendccrangestatuschstart; //type: uint32
        ydk::YLeaf catmpvclendccrangestatuschend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry


class CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable : public ydk::Entity
{
    public:
        CatmAISRDIStatusChPVclRangeTable();
        ~CatmAISRDIStatusChPVclRangeTable();

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

        class CatmAISRDIStatusChPVclRangeEntry; //type: CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry

        ydk::YList catmaisrdistatuschpvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable


class CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry : public ydk::Entity
{
    public:
        CatmAISRDIStatusChPVclRangeEntry();
        ~CatmAISRDIStatusChPVclRangeEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclaisrdilowerrangevalue; //type: int32
        ydk::YLeaf catmpvclaisrdihigherrangevalue; //type: int32
        ydk::YLeaf catmpvclaisrdirangestatuschstart; //type: uint32
        ydk::YLeaf catmpvclaisrdirangestatuschend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry


class CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable : public ydk::Entity
{
    public:
        CatmDownPVclRangeTable();
        ~CatmDownPVclRangeTable();

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

        class CatmDownPVclRangeEntry; //type: CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry

        ydk::YList catmdownpvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable


class CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry : public ydk::Entity
{
    public:
        CatmDownPVclRangeEntry();
        ~CatmDownPVclRangeEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmdownpvcllowerrangevalue; //type: int32
        ydk::YLeaf catmdownpvclhigherrangevalue; //type: int32
        ydk::YLeaf catmdownpvclrangestart; //type: uint32
        ydk::YLeaf catmdownpvclrangeend; //type: uint32
        ydk::YLeaf catmprevuppvclrangestart; //type: uint32
        ydk::YLeaf catmprevuppvclrangeend; //type: uint32
        ydk::YLeaf catmpvclrangefailurereason; //type: CatmOAMFailureType

}; // CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry


class CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable : public ydk::Entity
{
    public:
        CatmCurStatusUpPVclTable();
        ~CatmCurStatusUpPVclTable();

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

        class CatmCurStatusUpPVclEntry; //type: CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry

        ydk::YList catmcurstatusuppvclentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable


class CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry : public ydk::Entity
{
    public:
        CatmCurStatusUpPVclEntry();
        ~CatmCurStatusUpPVclEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf catmpvclstatusuptransition; //type: uint32
        ydk::YLeaf catmpvclstatusupstart; //type: uint32
        ydk::YLeaf catmpvclstatusupend; //type: uint32
        ydk::YLeaf catmpvclsegccstatusuptransition; //type: uint32
        ydk::YLeaf catmpvclsegccstatusupstart; //type: uint32
        ydk::YLeaf catmpvclsegccstatusupend; //type: uint32
        ydk::YLeaf catmpvclendccstatusuptransition; //type: uint32
        ydk::YLeaf catmpvclendccstatusupstart; //type: uint32
        ydk::YLeaf catmpvclendccstatusupend; //type: uint32
        ydk::YLeaf catmpvclaisrdistatusuptransition; //type: uint32
        ydk::YLeaf catmpvclaisrdistatusupstart; //type: uint32
        ydk::YLeaf catmpvclaisrdistatusupend; //type: uint32
        ydk::YLeaf catmpvclcurrecovertime; //type: uint32
        ydk::YLeaf catmpvclprevfailtime; //type: uint32
        ydk::YLeaf catmpvclrecoveryreason; //type: CatmOAMRecoveryType

}; // CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry


class CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable : public ydk::Entity
{
    public:
        CatmStatusUpPVclRangeTable();
        ~CatmStatusUpPVclRangeTable();

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

        class CatmStatusUpPVclRangeEntry; //type: CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry

        ydk::YList catmstatusuppvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable


class CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry : public ydk::Entity
{
    public:
        CatmStatusUpPVclRangeEntry();
        ~CatmStatusUpPVclRangeEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvcluplowerrangevalue; //type: int32
        ydk::YLeaf catmpvcluphigherrangevalue; //type: int32
        ydk::YLeaf catmpvclrangestatusupstart; //type: uint32
        ydk::YLeaf catmpvclrangestatusupend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry


class CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable : public ydk::Entity
{
    public:
        CatmSegCCStatusUpPVclRangeTable();
        ~CatmSegCCStatusUpPVclRangeTable();

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

        class CatmSegCCStatusUpPVclRangeEntry; //type: CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry

        ydk::YList catmsegccstatusuppvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable


class CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry : public ydk::Entity
{
    public:
        CatmSegCCStatusUpPVclRangeEntry();
        ~CatmSegCCStatusUpPVclRangeEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclsegccuplowerrangevalue; //type: int32
        ydk::YLeaf catmpvclsegccuphigherrangevalue; //type: int32
        ydk::YLeaf catmpvclsegccrangestatusupstart; //type: uint32
        ydk::YLeaf catmpvclsegccrangestatusupend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry


class CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable : public ydk::Entity
{
    public:
        CatmEndCCStatusUpPVclRangeTable();
        ~CatmEndCCStatusUpPVclRangeTable();

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

        class CatmEndCCStatusUpPVclRangeEntry; //type: CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry

        ydk::YList catmendccstatusuppvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable


class CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry : public ydk::Entity
{
    public:
        CatmEndCCStatusUpPVclRangeEntry();
        ~CatmEndCCStatusUpPVclRangeEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclendccuplowerrangevalue; //type: int32
        ydk::YLeaf catmpvclendccuphigherrangevalue; //type: int32
        ydk::YLeaf catmpvclendccrangestatusupstart; //type: uint32
        ydk::YLeaf catmpvclendccrangestatusupend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry


class CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable : public ydk::Entity
{
    public:
        CatmAISRDIStatusUpPVclRangeTable();
        ~CatmAISRDIStatusUpPVclRangeTable();

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

        class CatmAISRDIStatusUpPVclRangeEntry; //type: CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry

        ydk::YList catmaisrdistatusuppvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable


class CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry : public ydk::Entity
{
    public:
        CatmAISRDIStatusUpPVclRangeEntry();
        ~CatmAISRDIStatusUpPVclRangeEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmpvclaisrdiuplowerrangevalue; //type: int32
        ydk::YLeaf catmpvclaisrdiuphigherrangevalue; //type: int32
        ydk::YLeaf catmpvclaisrdirangestatusupstart; //type: uint32
        ydk::YLeaf catmpvclaisrdirangestatusupend; //type: uint32

}; // CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry


class CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable : public ydk::Entity
{
    public:
        CatmUpPVclRangeTable();
        ~CatmUpPVclRangeTable();

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

        class CatmUpPVclRangeEntry; //type: CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry

        ydk::YList catmuppvclrangeentry;
        
}; // CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable


class CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry : public ydk::Entity
{
    public:
        CatmUpPVclRangeEntry();
        ~CatmUpPVclRangeEntry();

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
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::CISCO_ATM_PVCTRAP_EXTN_MIB::CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::catmstatuschangepvclrangeindex)
        ydk::YLeaf catmstatuschangepvclrangeindex;
        ydk::YLeaf catmuppvcllowerrangevalue; //type: int32
        ydk::YLeaf catmuppvclhigherrangevalue; //type: int32
        ydk::YLeaf catmuppvclrangestart; //type: uint32
        ydk::YLeaf catmuppvclrangeend; //type: uint32
        ydk::YLeaf catmprevdownpvclrangestart; //type: uint32
        ydk::YLeaf catmprevdownpvclrangeend; //type: uint32
        ydk::YLeaf catmpvclrangerecoveryreason; //type: CatmOAMRecoveryType

}; // CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry

class CatmOAMRecoveryType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf catmLoopbackOAMRecover;
        static const ydk::Enum::YLeaf catmSegmentCCOAMRecover;
        static const ydk::Enum::YLeaf catmEndCCOAMRecover;
        static const ydk::Enum::YLeaf catmAISRDIOAMRecover;

        static int get_enum_value(const std::string & name) {
            if (name == "catmLoopbackOAMRecover") return 1;
            if (name == "catmSegmentCCOAMRecover") return 2;
            if (name == "catmEndCCOAMRecover") return 4;
            if (name == "catmAISRDIOAMRecover") return 8;
            return -1;
        }
};

class CatmOAMFailureType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf catmLoopbackOAMFailure;
        static const ydk::Enum::YLeaf catmSegmentCCOAMFailure;
        static const ydk::Enum::YLeaf catmEndCCOAMFailure;
        static const ydk::Enum::YLeaf catmAISRDIOAMFailure;

        static int get_enum_value(const std::string & name) {
            if (name == "catmLoopbackOAMFailure") return 1;
            if (name == "catmSegmentCCOAMFailure") return 2;
            if (name == "catmEndCCOAMFailure") return 4;
            if (name == "catmAISRDIOAMFailure") return 8;
            return -1;
        }
};


}
}

#endif /* _CISCO_ATM_PVCTRAP_EXTN_MIB_ */

