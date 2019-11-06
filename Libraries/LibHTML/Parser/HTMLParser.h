#pragma once

#include <AK/NonnullRefPtr.h>
#include <LibHTML/DOM/Document.h>

class DocumentFragment;

NonnullRefPtr<Document> parse_html(const StringView&, const URL& = URL());
RefPtr<DocumentFragment> parse_html_fragment(Document&, const StringView&);
