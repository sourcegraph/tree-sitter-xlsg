package tree_sitter_xlsg_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-xlsg"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_xlsg.Language())
	if language == nil {
		t.Errorf("Error loading Xlsg grammar")
	}
}
